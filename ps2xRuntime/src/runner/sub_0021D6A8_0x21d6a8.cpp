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

// Function: sub_0021D6A8
// Address: 0x21d6a8 - 0x21d720
void sub_0021D6A8_0x21d6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D6A8_0x21d6a8");
#endif

    switch (ctx->pc) {
        case 0x21d6c4u: goto label_21d6c4;
        case 0x21d6fcu: goto label_21d6fc;
        case 0x21d704u: goto label_21d704;
        case 0x21d70cu: goto label_21d70c;
        default: break;
    }

    ctx->pc = 0x21d6a8u;

    // 0x21d6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d6b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d6bc: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x21D6BCu;
    SET_GPR_U32(ctx, 31, 0x21D6C4u);
    ctx->pc = 0x21D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6BCu;
    // 0x21d6c0: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x21D6BCu, 0x21D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6C4u;
label_21d6c4:
    // 0x21d6c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21d6c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21d6cc: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x21d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x21d6d0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x21d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x21d6d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x21d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x21d6d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x21d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x21d6dc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x21d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x21d6e0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x21d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x21d6e4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x21d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x21d6e8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x21d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x21d6ec: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x21d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x21d6f0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x21d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x21d6f4: 0xc0875c8  jal         func_21D720
    ctx->pc = 0x21D6F4u;
    SET_GPR_U32(ctx, 31, 0x21D6FCu);
    ctx->pc = 0x21D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6F4u;
    // 0x21d6f8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D720u, 0x21D6F4u, 0x21D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6FCu;
label_21d6fc:
    // 0x21d6fc: 0xc0875c8  jal         func_21D720
    ctx->pc = 0x21D6FCu;
    SET_GPR_U32(ctx, 31, 0x21D704u);
    ctx->pc = 0x21D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6FCu;
    // 0x21d700: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D720u, 0x21D6FCu, 0x21D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D704u;
label_21d704:
    // 0x21d704: 0xc0875c8  jal         func_21D720
    ctx->pc = 0x21D704u;
    SET_GPR_U32(ctx, 31, 0x21D70Cu);
    ctx->pc = 0x21D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D704u;
    // 0x21d708: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D720u, 0x21D704u, 0x21D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D70Cu;
label_21d70c:
    // 0x21d70c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x21d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x21d710: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d718: 0x80875c8  j           func_21D720
    ctx->pc = 0x21D718u;
    ctx->pc = 0x21D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D718u;
    // 0x21d71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D720u;
    sub_0021D720_0x21d720(rdram, ctx, runtime); return;
    ctx->pc = 0x21D720u;
}
