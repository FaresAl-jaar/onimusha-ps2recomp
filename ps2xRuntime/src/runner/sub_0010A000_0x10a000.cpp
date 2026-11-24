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

// Function: sub_0010A000
// Address: 0x10a000 - 0x10a0a0
void sub_0010A000_0x10a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A000_0x10a000");
#endif

    switch (ctx->pc) {
        case 0x10a030u: goto label_10a030;
        case 0x10a03cu: goto label_10a03c;
        case 0x10a048u: goto label_10a048;
        case 0x10a054u: goto label_10a054;
        case 0x10a060u: goto label_10a060;
        case 0x10a06cu: goto label_10a06c;
        case 0x10a078u: goto label_10a078;
        case 0x10a088u: goto label_10a088;
        default: break;
    }

    ctx->pc = 0x10a000u;

    // 0x10a000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a00c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a018: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x10a018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x10a01c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x10a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x10a020: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x10a020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x10a024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a028: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A028u;
    SET_GPR_U32(ctx, 31, 0x10A030u);
    ctx->pc = 0x10A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A028u;
    // 0x10a02c: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A028u, 0x10A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A030u;
label_10a030:
    // 0x10a030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a034: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A034u;
    SET_GPR_U32(ctx, 31, 0x10A03Cu);
    ctx->pc = 0x10A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A034u;
    // 0x10a038: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A034u, 0x10A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A03Cu;
label_10a03c:
    // 0x10a03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a040: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A040u;
    SET_GPR_U32(ctx, 31, 0x10A048u);
    ctx->pc = 0x10A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A040u;
    // 0x10a044: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A040u, 0x10A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A048u;
label_10a048:
    // 0x10a048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a04c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A04Cu;
    SET_GPR_U32(ctx, 31, 0x10A054u);
    ctx->pc = 0x10A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A04Cu;
    // 0x10a050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A04Cu, 0x10A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A054u;
label_10a054:
    // 0x10a054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a058: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A058u;
    SET_GPR_U32(ctx, 31, 0x10A060u);
    ctx->pc = 0x10A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A058u;
    // 0x10a05c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A058u, 0x10A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A060u;
label_10a060:
    // 0x10a060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a064: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A064u;
    SET_GPR_U32(ctx, 31, 0x10A06Cu);
    ctx->pc = 0x10A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A064u;
    // 0x10a068: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A064u, 0x10A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A06Cu;
label_10a06c:
    // 0x10a06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a070: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A070u;
    SET_GPR_U32(ctx, 31, 0x10A078u);
    ctx->pc = 0x10A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A070u;
    // 0x10a074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A070u, 0x10A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A078u;
label_10a078:
    // 0x10a078: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x10a078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x10a07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a080: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A080u;
    SET_GPR_U32(ctx, 31, 0x10A088u);
    ctx->pc = 0x10A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A080u;
    // 0x10a084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A080u, 0x10A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A088u;
label_10a088:
    // 0x10a088: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x10a088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x10a08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a098: 0x804298e  j           func_10A638
    ctx->pc = 0x10A098u;
    ctx->pc = 0x10A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A098u;
    // 0x10a09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A638u;
    sub_0010A638_0x10a638(rdram, ctx, runtime); return;
    ctx->pc = 0x10A0A0u;
}
