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

// Function: sub_003DC890
// Address: 0x3dc890 - 0x3dc96c
void sub_003DC890_0x3dc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC890_0x3dc890");
#endif

    switch (ctx->pc) {
        case 0x3dc8c4u: goto label_3dc8c4;
        case 0x3dc8e0u: goto label_3dc8e0;
        case 0x3dc934u: goto label_3dc934;
        case 0x3dc948u: goto label_3dc948;
        default: break;
    }

    ctx->pc = 0x3dc890u;

    // 0x3dc890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dc890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3dc894: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3dc894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3dc898: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dc898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dc89c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dc89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3dc8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dc8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dc8a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc8ac: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x3dc8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3dc8b0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3dc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3dc8b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3dc8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dc8b8: 0x244502b0  addiu       $a1, $v0, 0x2B0
    ctx->pc = 0x3dc8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x3dc8bc: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3DC8BCu;
    SET_GPR_U32(ctx, 31, 0x3DC8C4u);
    ctx->pc = 0x3DC8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC8BCu;
    // 0x3dc8c0: 0x244603f0  addiu       $a2, $v0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3DC8BCu, 0x3DC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC8C4u;
label_3dc8c4:
    // 0x3dc8c4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3dc8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dc8c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3dc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3dc8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dc8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc8d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dc8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc8d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3dc8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3dc8d8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3dc8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3dc8dc: 0x0  nop
    ctx->pc = 0x3dc8dcu;
    // NOP
label_3dc8e0:
    // 0x3dc8e0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3dc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3dc8e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3dc8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3dc8e8: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x3dc8e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3dc8ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dc8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dc8f0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3dc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3dc8f4: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x3dc8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x3dc8f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3dc8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dc8fc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3dc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3dc900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dc900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc904: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x3dc904u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3dc908: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3dc908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3dc90c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dc90cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dc910: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3dc910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dc914: 0x0  nop
    ctx->pc = 0x3dc914u;
    // NOP
    // 0x3dc918: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3dc918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3dc91c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dc91cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3dc920: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3dc920u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dc924: 0x0  nop
    ctx->pc = 0x3dc924u;
    // NOP
    // 0x3dc928: 0x0  nop
    ctx->pc = 0x3dc928u;
    // NOP
    // 0x3dc92c: 0xc096784  jal         func_259E10
    ctx->pc = 0x3DC92Cu;
    SET_GPR_U32(ctx, 31, 0x3DC934u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3DC92Cu, 0x3DC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC934u;
label_3dc934:
    // 0x3dc934: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x3dc934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3dc938: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x3dc938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dc93c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dc93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc940: 0xc0bc8b0  jal         func_2F22C0
    ctx->pc = 0x3DC940u;
    SET_GPR_U32(ctx, 31, 0x3DC948u);
    ctx->pc = 0x3DC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC940u;
    // 0x3dc944: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F22C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F22C0u, 0x3DC940u, 0x3DC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC948u;
label_3dc948:
    // 0x3dc948: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3dc948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3dc94c: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x3dc94cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3dc950: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3DC950u;
    {
        const bool branch_taken_0x3dc950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc950) {
            ctx->pc = 0x3DC8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc8e0;
        }
    }
    ctx->pc = 0x3DC958u;
    // 0x3dc958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dc958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dc95c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc964: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC964u;
        // 0x3dc968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC96Cu;
}
