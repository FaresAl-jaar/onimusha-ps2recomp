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

// Function: sub_00366700
// Address: 0x366700 - 0x366794
void sub_00366700_0x366700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366700_0x366700");
#endif

    switch (ctx->pc) {
        case 0x366714u: goto label_366714;
        case 0x366750u: goto label_366750;
        case 0x366758u: goto label_366758;
        case 0x366784u: goto label_366784;
        default: break;
    }

    ctx->pc = 0x366700u;

    // 0x366700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x366704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x366708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x366708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36670c: 0xc0d9a94  jal         func_366A50
    ctx->pc = 0x36670Cu;
    SET_GPR_U32(ctx, 31, 0x366714u);
    ctx->pc = 0x366710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36670Cu;
    // 0x366710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366A50u, 0x36670Cu, 0x366714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366714u;
label_366714:
    // 0x366714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366718: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x366718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36671c: 0x2442a8f8  addiu       $v0, $v0, -0x5708
    ctx->pc = 0x36671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945016));
    // 0x366720: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x366720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x366724: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x366724u;
    { uint32_t bits = FAST_READ32(0x65A8F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366728: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x366728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36672c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36672cu;
    { uint32_t bits = FAST_READ32(0x65A8FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366730: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366734: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x366734u;
    { uint32_t bits = FAST_READ32(0x65A900u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366738: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x366738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36673c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x36673cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x366740: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x366740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x366744: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x366744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x366748: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x366748u;
    SET_GPR_U32(ctx, 31, 0x366750u);
    ctx->pc = 0x36674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366748u;
    // 0x36674c: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x366748u, 0x366750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366750u;
label_366750:
    // 0x366750: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x366750u;
    SET_GPR_U32(ctx, 31, 0x366758u);
    ctx->pc = 0x366754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366750u;
    // 0x366754: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x366750u, 0x366758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366758u;
label_366758:
    // 0x366758: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36675c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x36675cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x366760: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x366760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x366764: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x366764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x366768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36676c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x36676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x366770: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x366770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366774: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x366774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x366778: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36677c: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x36677Cu;
    SET_GPR_U32(ctx, 31, 0x366784u);
    ctx->pc = 0x366780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36677Cu;
    // 0x366780: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x36677Cu, 0x366784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366784u;
label_366784:
    // 0x366784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36678c: 0x3e00008  jr          $ra
    ctx->pc = 0x36678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36678Cu;
        // 0x366790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36678Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366794u;
}
