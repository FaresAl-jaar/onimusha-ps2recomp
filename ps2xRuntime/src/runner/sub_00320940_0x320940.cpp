#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00320940
// Address: 0x320940 - 0x320a54
void sub_00320940_0x320940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320940_0x320940");
#endif

    switch (ctx->pc) {
        case 0x320998u: goto label_320998;
        case 0x3209d8u: goto label_3209d8;
        case 0x3209e0u: goto label_3209e0;
        case 0x3209f0u: goto label_3209f0;
        case 0x320a38u: goto label_320a38;
        default: break;
    }

    ctx->pc = 0x320940u;

    // 0x320940: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x320940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x320944: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x320944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x320948: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x320948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32094c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x32094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x320950: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x320950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x320954: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x320954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32095c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320960: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x320960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x320968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32096c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x32096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320970: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x320970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320974: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x320974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320978: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32097c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x32097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320980: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x320980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320984: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x320984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x320988: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x320988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32098c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x32098cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320990: 0xc0996b8  jal         func_265AE0
    ctx->pc = 0x320990u;
    SET_GPR_U32(ctx, 31, 0x320998u);
    ctx->pc = 0x320994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320990u;
    // 0x320994: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x320990u, 0x320998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320998u;
label_320998:
    // 0x320998: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x320998u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32099c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x32099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3209a0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3209a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3209a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3209a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3209a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3209a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3209ac: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3209acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3209b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3209b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3209b4: 0x0  nop
    ctx->pc = 0x3209b4u;
    // NOP
    // 0x3209b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3209b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3209bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3209bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3209c0: 0x0  nop
    ctx->pc = 0x3209c0u;
    // NOP
    // 0x3209c4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3209c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3209c8: 0x0  nop
    ctx->pc = 0x3209c8u;
    // NOP
    // 0x3209cc: 0x0  nop
    ctx->pc = 0x3209ccu;
    // NOP
    // 0x3209d0: 0xc099778  jal         func_265DE0
    ctx->pc = 0x3209D0u;
    SET_GPR_U32(ctx, 31, 0x3209D8u);
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3209D0u, 0x3209D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209D8u;
label_3209d8:
    // 0x3209d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3209d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209dc: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3209dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3209e0:
    // 0x3209e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3209e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3209e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3209e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209e8: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x3209E8u;
    SET_GPR_U32(ctx, 31, 0x3209F0u);
    ctx->pc = 0x3209ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3209E8u;
    // 0x3209ec: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3209E8u, 0x3209F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209F0u;
label_3209f0:
    // 0x3209f0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3209f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3209f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3209f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3209f8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3209f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3209fc: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x3209fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x320a00: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x320a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320a04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x320a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x320a08: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x320a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320a0c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x320a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320a10: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x320a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x320a14: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x320a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x320a18: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x320a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x320a1c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x320a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x320a20: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x320A20u;
    {
        const bool branch_taken_0x320a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A20u;
        // 0x320a24: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a20) {
            ctx->pc = 0x3209E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3209e0;
        }
    }
    ctx->pc = 0x320A28u;
    // 0x320a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a2c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x320a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x320a30: 0xc0c839c  jal         func_320E70
    ctx->pc = 0x320A30u;
    SET_GPR_U32(ctx, 31, 0x320A38u);
    ctx->pc = 0x320A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A30u;
    // 0x320a34: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E70u, 0x320A30u, 0x320A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A38u;
label_320a38:
    // 0x320a38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x320a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320a3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x320a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320a40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320a44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x320A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A4Cu;
        // 0x320a50: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320A54u;
}
