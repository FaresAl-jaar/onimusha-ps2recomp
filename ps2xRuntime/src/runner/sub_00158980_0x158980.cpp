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

// Function: sub_00158980
// Address: 0x158980 - 0x158a18
void sub_00158980_0x158980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158980_0x158980");
#endif

    switch (ctx->pc) {
        case 0x158998u: goto label_158998;
        case 0x1589a4u: goto label_1589a4;
        case 0x1589b0u: goto label_1589b0;
        case 0x1589bcu: goto label_1589bc;
        case 0x1589c4u: goto label_1589c4;
        case 0x1589d4u: goto label_1589d4;
        case 0x1589e4u: goto label_1589e4;
        case 0x1589f8u: goto label_1589f8;
        case 0x158a0cu: goto label_158a0c;
        default: break;
    }

    ctx->pc = 0x158980u;

    // 0x158980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158984: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x158984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x158988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15898c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x15898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x158990: 0xc094fac  jal         func_253EB0
    ctx->pc = 0x158990u;
    SET_GPR_U32(ctx, 31, 0x158998u);
    ctx->pc = 0x158994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158990u;
    // 0x158994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253EB0u, 0x158990u, 0x158998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158998u;
label_158998:
    // 0x158998: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x158998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x15899c: 0xc0bcd38  jal         func_2F34E0
    ctx->pc = 0x15899Cu;
    SET_GPR_U32(ctx, 31, 0x1589A4u);
    ctx->pc = 0x1589A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15899Cu;
    // 0x1589a0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F34E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F34E0u, 0x15899Cu, 0x1589A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589A4u;
label_1589a4:
    // 0x1589a4: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1589a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x1589a8: 0xc069284  jal         func_1A4A10
    ctx->pc = 0x1589A8u;
    SET_GPR_U32(ctx, 31, 0x1589B0u);
    ctx->pc = 0x1589ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589A8u;
    // 0x1589ac: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A10u, 0x1589A8u, 0x1589B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589B0u;
label_1589b0:
    // 0x1589b0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1589b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1589b4: 0xc0ad0ac  jal         func_2B42B0
    ctx->pc = 0x1589B4u;
    SET_GPR_U32(ctx, 31, 0x1589BCu);
    ctx->pc = 0x1589B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589B4u;
    // 0x1589b8: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42B0u, 0x1589B4u, 0x1589BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589BCu;
label_1589bc:
    // 0x1589bc: 0xc05eee4  jal         func_17BB90
    ctx->pc = 0x1589BCu;
    SET_GPR_U32(ctx, 31, 0x1589C4u);
    ctx->pc = 0x1589C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589BCu;
    // 0x1589c0: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB90u, 0x1589BCu, 0x1589C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589C4u;
label_1589c4:
    // 0x1589c4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1589c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1589c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1589c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1589cc: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x1589CCu;
    SET_GPR_U32(ctx, 31, 0x1589D4u);
    ctx->pc = 0x1589D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589CCu;
    // 0x1589d0: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x1589CCu, 0x1589D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589D4u;
label_1589d4:
    // 0x1589d4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1589d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1589d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1589d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1589dc: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x1589DCu;
    SET_GPR_U32(ctx, 31, 0x1589E4u);
    ctx->pc = 0x1589E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589DCu;
    // 0x1589e0: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x1589DCu, 0x1589E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589E4u;
label_1589e4:
    // 0x1589e4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1589e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1589e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1589e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1589ec: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1589ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1589f0: 0xc04c79c  jal         func_131E70
    ctx->pc = 0x1589F0u;
    SET_GPR_U32(ctx, 31, 0x1589F8u);
    ctx->pc = 0x1589F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589F0u;
    // 0x1589f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E70u, 0x1589F0u, 0x1589F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589F8u;
label_1589f8:
    // 0x1589f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1589f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1589fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1589fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158a00: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x158a04: 0xc04c79c  jal         func_131E70
    ctx->pc = 0x158A04u;
    SET_GPR_U32(ctx, 31, 0x158A0Cu);
    ctx->pc = 0x158A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A04u;
    // 0x158a08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E70u, 0x158A04u, 0x158A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A0Cu;
label_158a0c:
    // 0x158a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158a10: 0x3e00008  jr          $ra
    ctx->pc = 0x158A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A10u;
        // 0x158a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158A18u;
}
