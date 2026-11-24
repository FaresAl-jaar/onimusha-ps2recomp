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

// Function: sub_003C08B0
// Address: 0x3c08b0 - 0x3c0980
void sub_003C08B0_0x3c08b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C08B0_0x3c08b0");
#endif

    switch (ctx->pc) {
        case 0x3c08c8u: goto label_3c08c8;
        case 0x3c0958u: goto label_3c0958;
        case 0x3c096cu: goto label_3c096c;
        default: break;
    }

    ctx->pc = 0x3c08b0u;

    // 0x3c08b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c08b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c08b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3c08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c08b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c08b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c08bc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3c08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c08c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C08C0u;
    {
        const bool branch_taken_0x3c08c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08C0u;
        // 0x3c08c4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08c0) {
            ctx->pc = 0x3C08E4u;
            goto label_3c08e4;
        }
    }
    ctx->pc = 0x3C08C8u;
label_3c08c8:
    // 0x3c08c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c08c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c08cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c08d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c08d4: 0x0  nop
    ctx->pc = 0x3c08d4u;
    // NOP
    // 0x3c08d8: 0x0  nop
    ctx->pc = 0x3c08d8u;
    // NOP
    // 0x3c08dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C08DCu;
    {
        const bool branch_taken_0x3c08dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c08dc) {
            ctx->pc = 0x3C08C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c08c8;
        }
    }
    ctx->pc = 0x3C08E4u;
label_3c08e4:
    // 0x3c08e4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3c08e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c08e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3c08e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3c08ec: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c08ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c08f0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3c08f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3c08f4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3c08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c08f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3c08f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3c08fc: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x3c08fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3c0900: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3c0900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c0904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0908: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C0908u;
    {
        const bool branch_taken_0x3c0908 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0908u;
        // 0x3c090c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0908) {
            ctx->pc = 0x3C091Cu;
            goto label_3c091c;
        }
    }
    ctx->pc = 0x3C0910u;
    // 0x3c0910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0914u;
    {
        const bool branch_taken_0x3c0914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0914u;
        // 0x3c0918: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0914) {
            ctx->pc = 0x3C0938u;
            goto label_3c0938;
        }
    }
    ctx->pc = 0x3C091Cu;
label_3c091c:
    // 0x3c091c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c091cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3c0920: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c0920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c0924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c0924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c0928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c092c: 0x0  nop
    ctx->pc = 0x3c092cu;
    // NOP
    // 0x3c0930: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c0930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c0934: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c0934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c0938:
    // 0x3c0938: 0x0  nop
    ctx->pc = 0x3c0938u;
    // NOP
    // 0x3c093c: 0x0  nop
    ctx->pc = 0x3c093cu;
    // NOP
    // 0x3c0940: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c0940u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c0944: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3c0944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3c0948: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c094c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c094cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0950: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0950u;
    SET_GPR_U32(ctx, 31, 0x3C0958u);
    ctx->pc = 0x3C0954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0950u;
    // 0x3c0954: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0950u, 0x3C0958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0958u;
label_3c0958:
    // 0x3c0958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c095c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c0960: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0964: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C0964u;
    SET_GPR_U32(ctx, 31, 0x3C096Cu);
    ctx->pc = 0x3C0968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0964u;
    // 0x3c0968: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C0964u, 0x3C096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C096Cu;
label_3c096c:
    // 0x3c096c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c096cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c0970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c0970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0974: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c0974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c0978: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0978u;
        // 0x3c097c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0980u;
}
