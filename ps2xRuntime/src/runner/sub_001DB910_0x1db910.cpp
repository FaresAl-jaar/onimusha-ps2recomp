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

// Function: sub_001DB910
// Address: 0x1db910 - 0x1db988
void sub_001DB910_0x1db910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB910_0x1db910");
#endif

    switch (ctx->pc) {
        case 0x1db910u: goto label_1db910;
        case 0x1db914u: goto label_1db914;
        case 0x1db918u: goto label_1db918;
        case 0x1db91cu: goto label_1db91c;
        case 0x1db920u: goto label_1db920;
        case 0x1db924u: goto label_1db924;
        case 0x1db928u: goto label_1db928;
        case 0x1db92cu: goto label_1db92c;
        case 0x1db930u: goto label_1db930;
        case 0x1db934u: goto label_1db934;
        case 0x1db938u: goto label_1db938;
        case 0x1db93cu: goto label_1db93c;
        case 0x1db940u: goto label_1db940;
        case 0x1db944u: goto label_1db944;
        case 0x1db948u: goto label_1db948;
        case 0x1db94cu: goto label_1db94c;
        case 0x1db950u: goto label_1db950;
        case 0x1db954u: goto label_1db954;
        case 0x1db958u: goto label_1db958;
        case 0x1db95cu: goto label_1db95c;
        case 0x1db960u: goto label_1db960;
        case 0x1db964u: goto label_1db964;
        case 0x1db968u: goto label_1db968;
        case 0x1db96cu: goto label_1db96c;
        case 0x1db970u: goto label_1db970;
        case 0x1db974u: goto label_1db974;
        case 0x1db978u: goto label_1db978;
        case 0x1db97cu: goto label_1db97c;
        case 0x1db980u: goto label_1db980;
        case 0x1db984u: goto label_1db984;
        default: break;
    }

    ctx->pc = 0x1db910u;

label_1db910:
    // 0x1db910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1db914:
    // 0x1db914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1db918:
    // 0x1db918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1db91c:
    // 0x1db91c: 0xc076e10  jal         func_1DB840
label_1db920:
    if (ctx->pc == 0x1DB920u) {
        ctx->pc = 0x1DB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB91Cu;
        // 0x1db920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB924u;
        goto label_1db924;
    }
    ctx->pc = 0x1DB91Cu;
    SET_GPR_U32(ctx, 31, 0x1DB924u);
    ctx->pc = 0x1DB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB91Cu;
    // 0x1db920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1DB91Cu, 0x1DB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB924u;
label_1db924:
    // 0x1db924: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1db924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1db928:
    // 0x1db928: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1db92c:
    if (ctx->pc == 0x1DB92Cu) {
        ctx->pc = 0x1DB930u;
        goto label_1db930;
    }
    ctx->pc = 0x1DB928u;
    {
        const bool branch_taken_0x1db928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db928) {
            ctx->pc = 0x1DB950u;
            goto label_1db950;
        }
    }
    ctx->pc = 0x1DB930u;
label_1db930:
    // 0x1db930: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1db934:
    if (ctx->pc == 0x1DB934u) {
        ctx->pc = 0x1DB938u;
        goto label_1db938;
    }
    ctx->pc = 0x1DB930u;
    {
        const bool branch_taken_0x1db930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db930) {
            ctx->pc = 0x1DB948u;
            goto label_1db948;
        }
    }
    ctx->pc = 0x1DB938u;
label_1db938:
    // 0x1db938: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db93c:
    // 0x1db93c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1db93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1db940:
    // 0x1db940: 0x320f809  jalr        $t9
label_1db944:
    if (ctx->pc == 0x1DB944u) {
        ctx->pc = 0x1DB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB940u;
        // 0x1db944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB948u;
        goto label_1db948;
    }
    ctx->pc = 0x1DB940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB948u);
        ctx->pc = 0x1DB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB940u;
        // 0x1db944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB940u, 0x1DB948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB948u;
label_1db948:
    // 0x1db948: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1db948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1db94c:
    // 0x1db94c: 0x0  nop
    ctx->pc = 0x1db94cu;
    // NOP
label_1db950:
    // 0x1db950: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1db950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1db954:
    // 0x1db954: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1db958:
    if (ctx->pc == 0x1DB958u) {
        ctx->pc = 0x1DB95Cu;
        goto label_1db95c;
    }
    ctx->pc = 0x1DB954u;
    {
        const bool branch_taken_0x1db954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db954) {
            ctx->pc = 0x1DB978u;
            goto label_1db978;
        }
    }
    ctx->pc = 0x1DB95Cu;
label_1db95c:
    // 0x1db95c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1db960:
    if (ctx->pc == 0x1DB960u) {
        ctx->pc = 0x1DB964u;
        goto label_1db964;
    }
    ctx->pc = 0x1DB95Cu;
    {
        const bool branch_taken_0x1db95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db95c) {
            ctx->pc = 0x1DB970u;
            goto label_1db970;
        }
    }
    ctx->pc = 0x1DB964u;
label_1db964:
    // 0x1db964: 0xc0741a8  jal         func_1D06A0
label_1db968:
    if (ctx->pc == 0x1DB968u) {
        ctx->pc = 0x1DB96Cu;
        goto label_1db96c;
    }
    ctx->pc = 0x1DB964u;
    SET_GPR_U32(ctx, 31, 0x1DB96Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1DB964u, 0x1DB96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB96Cu;
label_1db96c:
    // 0x1db96c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1db96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1db970:
    // 0x1db970: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1db970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1db974:
    // 0x1db974: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1db974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1db978:
    // 0x1db978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db97c:
    // 0x1db97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db980:
    // 0x1db980: 0x3e00008  jr          $ra
label_1db984:
    if (ctx->pc == 0x1DB984u) {
        ctx->pc = 0x1DB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB980u;
        // 0x1db984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB988u;
        goto label_fallthrough_0x1db980;
    }
    ctx->pc = 0x1DB980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB980u;
        // 0x1db984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db980:
    ctx->pc = 0x1DB988u;
}
