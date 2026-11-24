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

// Function: sub_0020B1D8
// Address: 0x20b1d8 - 0x20b234
void sub_0020B1D8_0x20b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B1D8_0x20b1d8");
#endif

    switch (ctx->pc) {
        case 0x20b1d8u: goto label_20b1d8;
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b1e0u: goto label_20b1e0;
        case 0x20b1e4u: goto label_20b1e4;
        case 0x20b1e8u: goto label_20b1e8;
        case 0x20b1ecu: goto label_20b1ec;
        case 0x20b1f0u: goto label_20b1f0;
        case 0x20b1f4u: goto label_20b1f4;
        case 0x20b1f8u: goto label_20b1f8;
        case 0x20b1fcu: goto label_20b1fc;
        case 0x20b200u: goto label_20b200;
        case 0x20b204u: goto label_20b204;
        case 0x20b208u: goto label_20b208;
        case 0x20b20cu: goto label_20b20c;
        case 0x20b210u: goto label_20b210;
        case 0x20b214u: goto label_20b214;
        case 0x20b218u: goto label_20b218;
        case 0x20b21cu: goto label_20b21c;
        case 0x20b220u: goto label_20b220;
        case 0x20b224u: goto label_20b224;
        case 0x20b228u: goto label_20b228;
        case 0x20b22cu: goto label_20b22c;
        case 0x20b230u: goto label_20b230;
        default: break;
    }

    ctx->pc = 0x20b1d8u;

label_20b1d8:
    // 0x20b1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b1dc:
    // 0x20b1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20b1e0:
    // 0x20b1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b1e4:
    // 0x20b1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20b1e8:
    // 0x20b1e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b1ec:
    // 0x20b1ec: 0xc082d4c  jal         func_20B530
label_20b1f0:
    if (ctx->pc == 0x20B1F0u) {
        ctx->pc = 0x20B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1ECu;
        // 0x20b1f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1F4u;
        goto label_20b1f4;
    }
    ctx->pc = 0x20B1ECu;
    SET_GPR_U32(ctx, 31, 0x20B1F4u);
    ctx->pc = 0x20B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1ECu;
    // 0x20b1f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20B1ECu, 0x20B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1F4u;
label_20b1f4:
    // 0x20b1f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b1f8:
    // 0x20b1f8: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_20b1fc:
    if (ctx->pc == 0x20B1FCu) {
        ctx->pc = 0x20B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1F8u;
        // 0x20b1fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B200u;
        goto label_20b200;
    }
    ctx->pc = 0x20B1F8u;
    {
        const bool branch_taken_0x20b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20b1f8) {
            ctx->pc = 0x20B1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B1F8u;
            // 0x20b1fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B224u;
            goto label_20b224;
        }
    }
    ctx->pc = 0x20B200u;
label_20b200:
    // 0x20b200: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b204:
    // 0x20b204: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20b208:
    if (ctx->pc == 0x20B208u) {
        ctx->pc = 0x20B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B204u;
        // 0x20b208: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B20Cu;
        goto label_20b20c;
    }
    ctx->pc = 0x20B204u;
    {
        const bool branch_taken_0x20b204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B204u;
        // 0x20b208: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b204) {
            ctx->pc = 0x20B220u;
            goto label_20b220;
        }
    }
    ctx->pc = 0x20B20Cu;
label_20b20c:
    // 0x20b20c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_20b210:
    // 0x20b210: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20b214:
    if (ctx->pc == 0x20B214u) {
        ctx->pc = 0x20B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B210u;
        // 0x20b214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B218u;
        goto label_20b218;
    }
    ctx->pc = 0x20B210u;
    {
        const bool branch_taken_0x20b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b210) {
            ctx->pc = 0x20B214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B210u;
            // 0x20b214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B224u;
            goto label_20b224;
        }
    }
    ctx->pc = 0x20B218u;
label_20b218:
    // 0x20b218: 0x40f809  jalr        $v0
label_20b21c:
    if (ctx->pc == 0x20B21Cu) {
        ctx->pc = 0x20B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B218u;
        // 0x20b21c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B220u;
        goto label_20b220;
    }
    ctx->pc = 0x20B218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B220u);
        ctx->pc = 0x20B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B218u;
        // 0x20b21c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B218u, 0x20B220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B220u;
label_20b220:
    // 0x20b220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b224:
    // 0x20b224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b228:
    // 0x20b228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b22c:
    // 0x20b22c: 0x3e00008  jr          $ra
label_20b230:
    if (ctx->pc == 0x20B230u) {
        ctx->pc = 0x20B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B22Cu;
        // 0x20b230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B234u;
        goto label_fallthrough_0x20b22c;
    }
    ctx->pc = 0x20B22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B22Cu;
        // 0x20b230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b22c:
    ctx->pc = 0x20B234u;
}
