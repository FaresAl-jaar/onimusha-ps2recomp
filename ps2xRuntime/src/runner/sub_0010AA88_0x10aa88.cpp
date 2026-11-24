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

// Function: sub_0010AA88
// Address: 0x10aa88 - 0x10ab1c
void sub_0010AA88_0x10aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AA88_0x10aa88");
#endif

    switch (ctx->pc) {
        case 0x10aaa0u: goto label_10aaa0;
        case 0x10aaacu: goto label_10aaac;
        case 0x10aab8u: goto label_10aab8;
        case 0x10aac4u: goto label_10aac4;
        case 0x10aad0u: goto label_10aad0;
        case 0x10aadcu: goto label_10aadc;
        case 0x10aae8u: goto label_10aae8;
        case 0x10aaf4u: goto label_10aaf4;
        case 0x10ab00u: goto label_10ab00;
        case 0x10ab0cu: goto label_10ab0c;
        default: break;
    }

    ctx->pc = 0x10aa88u;

    // 0x10aa88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10aa8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aa94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10aa98: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA98u;
    SET_GPR_U32(ctx, 31, 0x10AAA0u);
    ctx->pc = 0x10AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA98u;
    // 0x10aa9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA98u, 0x10AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAA0u;
label_10aaa0:
    // 0x10aaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aaa4: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AAA4u;
    SET_GPR_U32(ctx, 31, 0x10AAACu);
    ctx->pc = 0x10AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAA4u;
    // 0x10aaa8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AAA4u, 0x10AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAACu;
label_10aaac:
    // 0x10aaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aab0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AAB0u;
    SET_GPR_U32(ctx, 31, 0x10AAB8u);
    ctx->pc = 0x10AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAB0u;
    // 0x10aab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AAB0u, 0x10AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAB8u;
label_10aab8:
    // 0x10aab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aabc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AABCu;
    SET_GPR_U32(ctx, 31, 0x10AAC4u);
    ctx->pc = 0x10AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AABCu;
    // 0x10aac0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AABCu, 0x10AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAC4u;
label_10aac4:
    // 0x10aac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aac8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AAC8u;
    SET_GPR_U32(ctx, 31, 0x10AAD0u);
    ctx->pc = 0x10AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAC8u;
    // 0x10aacc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AAC8u, 0x10AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAD0u;
label_10aad0:
    // 0x10aad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aad4: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AAD4u;
    SET_GPR_U32(ctx, 31, 0x10AADCu);
    ctx->pc = 0x10AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAD4u;
    // 0x10aad8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AAD4u, 0x10AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AADCu;
label_10aadc:
    // 0x10aadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aae0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AAE0u;
    SET_GPR_U32(ctx, 31, 0x10AAE8u);
    ctx->pc = 0x10AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAE0u;
    // 0x10aae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AAE0u, 0x10AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAE8u;
label_10aae8:
    // 0x10aae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aaec: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AAECu;
    SET_GPR_U32(ctx, 31, 0x10AAF4u);
    ctx->pc = 0x10AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAECu;
    // 0x10aaf0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AAECu, 0x10AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAF4u;
label_10aaf4:
    // 0x10aaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aaf8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AAF8u;
    SET_GPR_U32(ctx, 31, 0x10AB00u);
    ctx->pc = 0x10AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAF8u;
    // 0x10aafc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AAF8u, 0x10AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB00u;
label_10ab00:
    // 0x10ab00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab04: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AB04u;
    SET_GPR_U32(ctx, 31, 0x10AB0Cu);
    ctx->pc = 0x10AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB04u;
    // 0x10ab08: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AB04u, 0x10AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB0Cu;
label_10ab0c:
    // 0x10ab0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ab0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ab10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab14: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB14u;
        // 0x10ab18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AB1Cu;
}
