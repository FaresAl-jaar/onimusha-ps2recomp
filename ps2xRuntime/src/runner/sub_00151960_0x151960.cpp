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

// Function: sub_00151960
// Address: 0x151960 - 0x151a0c
void sub_00151960_0x151960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151960_0x151960");
#endif

    switch (ctx->pc) {
        case 0x15197cu: goto label_15197c;
        case 0x151990u: goto label_151990;
        case 0x1519a4u: goto label_1519a4;
        case 0x1519b8u: goto label_1519b8;
        case 0x1519ccu: goto label_1519cc;
        case 0x1519d4u: goto label_1519d4;
        case 0x1519e4u: goto label_1519e4;
        case 0x1519ecu: goto label_1519ec;
        case 0x1519fcu: goto label_1519fc;
        default: break;
    }

    ctx->pc = 0x151960u;

    // 0x151960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151964: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15196c: 0x24846b80  addiu       $a0, $a0, 0x6B80
    ctx->pc = 0x15196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27520));
    // 0x151970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151974: 0xc049590  jal         func_125640
    ctx->pc = 0x151974u;
    SET_GPR_U32(ctx, 31, 0x15197Cu);
    ctx->pc = 0x151978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151974u;
    // 0x151978: 0x240600b0  addiu       $a2, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x151974u, 0x15197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15197Cu;
label_15197c:
    // 0x15197c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x15197cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151984: 0x24846c40  addiu       $a0, $a0, 0x6C40
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27712));
    // 0x151988: 0xc049590  jal         func_125640
    ctx->pc = 0x151988u;
    SET_GPR_U32(ctx, 31, 0x151990u);
    ctx->pc = 0x15198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151988u;
    // 0x15198c: 0x24060320  addiu       $a2, $zero, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x151988u, 0x151990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151990u;
label_151990:
    // 0x151990: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151998: 0x24846f80  addiu       $a0, $a0, 0x6F80
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28544));
    // 0x15199c: 0xc049590  jal         func_125640
    ctx->pc = 0x15199Cu;
    SET_GPR_U32(ctx, 31, 0x1519A4u);
    ctx->pc = 0x1519A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15199Cu;
    // 0x1519a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x15199Cu, 0x1519A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519A4u;
label_1519a4:
    // 0x1519a4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1519a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1519a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519ac: 0x24846fc0  addiu       $a0, $a0, 0x6FC0
    ctx->pc = 0x1519acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28608));
    // 0x1519b0: 0xc049590  jal         func_125640
    ctx->pc = 0x1519B0u;
    SET_GPR_U32(ctx, 31, 0x1519B8u);
    ctx->pc = 0x1519B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519B0u;
    // 0x1519b4: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1519B0u, 0x1519B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519B8u;
label_1519b8:
    // 0x1519b8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1519b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1519bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1519bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519c0: 0x24847080  addiu       $a0, $a0, 0x7080
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28800));
    // 0x1519c4: 0xc049590  jal         func_125640
    ctx->pc = 0x1519C4u;
    SET_GPR_U32(ctx, 31, 0x1519CCu);
    ctx->pc = 0x1519C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519C4u;
    // 0x1519c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1519C4u, 0x1519CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519CCu;
label_1519cc:
    // 0x1519cc: 0xc054988  jal         func_152620
    ctx->pc = 0x1519CCu;
    SET_GPR_U32(ctx, 31, 0x1519D4u);
    ctx->pc = 0x1519D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519CCu;
    // 0x1519d0: 0xaf808568  sw          $zero, -0x7A98($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152620u, 0x1519CCu, 0x1519D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519D4u;
label_1519d4:
    // 0x1519d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1519d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1519d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519dc: 0xc049590  jal         func_125640
    ctx->pc = 0x1519DCu;
    SET_GPR_U32(ctx, 31, 0x1519E4u);
    ctx->pc = 0x1519E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519DCu;
    // 0x1519e0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1519DCu, 0x1519E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519E4u;
label_1519e4:
    // 0x1519e4: 0xc054990  jal         func_152640
    ctx->pc = 0x1519E4u;
    SET_GPR_U32(ctx, 31, 0x1519ECu);
    ctx->pc = 0x1519E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519E4u;
    // 0x1519e8: 0xaf80856c  sw          $zero, -0x7A94($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935916), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x1519E4u, 0x1519ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519ECu;
label_1519ec:
    // 0x1519ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1519ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1519f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519f4: 0xc049590  jal         func_125640
    ctx->pc = 0x1519F4u;
    SET_GPR_U32(ctx, 31, 0x1519FCu);
    ctx->pc = 0x1519F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519F4u;
    // 0x1519f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1519F4u, 0x1519FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519FCu;
label_1519fc:
    // 0x1519fc: 0xaf808570  sw          $zero, -0x7A90($gp)
    ctx->pc = 0x1519fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935920), GPR_U32(ctx, 0));
    // 0x151a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151a04: 0x3e00008  jr          $ra
    ctx->pc = 0x151A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A04u;
        // 0x151a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151A0Cu;
}
