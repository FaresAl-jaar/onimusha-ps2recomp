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

// Function: sub_0035D910
// Address: 0x35d910 - 0x35d9a8
void sub_0035D910_0x35d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D910_0x35d910");
#endif

    switch (ctx->pc) {
        case 0x35d924u: goto label_35d924;
        case 0x35d950u: goto label_35d950;
        case 0x35d964u: goto label_35d964;
        case 0x35d96cu: goto label_35d96c;
        default: break;
    }

    ctx->pc = 0x35d910u;

    // 0x35d910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d91c: 0xc097f7c  jal         func_25FDF0
    ctx->pc = 0x35D91Cu;
    SET_GPR_U32(ctx, 31, 0x35D924u);
    ctx->pc = 0x35D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D91Cu;
    // 0x35d920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDF0u, 0x35D91Cu, 0x35D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D924u;
label_35d924:
    // 0x35d924: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x35d924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x35d928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35d928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d92c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35d92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d930: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x35d930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d934: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x35d934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x35d938: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x35d938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d93c: 0xae0028d0  sw          $zero, 0x28D0($s0)
    ctx->pc = 0x35d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10448), GPR_U32(ctx, 0));
    // 0x35d940: 0xae0028d4  sw          $zero, 0x28D4($s0)
    ctx->pc = 0x35d940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 0));
    // 0x35d944: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x35d944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x35d948: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x35D948u;
    SET_GPR_U32(ctx, 31, 0x35D950u);
    ctx->pc = 0x35D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D948u;
    // 0x35d94c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x35D948u, 0x35D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D950u;
label_35d950:
    // 0x35d950: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x35d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x35d954: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x35d954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x35d958: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x35d958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x35d95c: 0xc060b00  jal         func_182C00
    ctx->pc = 0x35D95Cu;
    SET_GPR_U32(ctx, 31, 0x35D964u);
    ctx->pc = 0x35D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D95Cu;
    // 0x35d960: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C00u, 0x35D95Cu, 0x35D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D964u;
label_35d964:
    // 0x35d964: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x35D964u;
    SET_GPR_U32(ctx, 31, 0x35D96Cu);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x35D964u, 0x35D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D96Cu;
label_35d96c:
    // 0x35d96c: 0x3c010014  lui         $at, 0x14
    ctx->pc = 0x35d96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20 << 16));
    // 0x35d970: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x35d970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x35d974: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x35D974u;
    {
        const bool branch_taken_0x35d974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d974) {
            ctx->pc = 0x35D998u;
            goto label_35d998;
        }
    }
    ctx->pc = 0x35D97Cu;
    // 0x35d97c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x35d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35d980: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x35d980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x35d984: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x35d984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x35d988: 0x8ca422e4  lw          $a0, 0x22E4($a1)
    ctx->pc = 0x35d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8932)));
    // 0x35d98c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35d98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35d990: 0xaca322e4  sw          $v1, 0x22E4($a1)
    ctx->pc = 0x35d990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8932), GPR_U32(ctx, 3));
    // 0x35d994: 0x0  nop
    ctx->pc = 0x35d994u;
    // NOP
label_35d998:
    // 0x35d998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d99c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9A0u;
        // 0x35d9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D9A8u;
}
