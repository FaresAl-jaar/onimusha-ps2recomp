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

// Function: sub_00250238
// Address: 0x250238 - 0x250280
void sub_00250238_0x250238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250238_0x250238");
#endif

    switch (ctx->pc) {
        case 0x250238u: goto label_250238;
        case 0x25023cu: goto label_25023c;
        case 0x250240u: goto label_250240;
        case 0x250244u: goto label_250244;
        case 0x250248u: goto label_250248;
        case 0x25024cu: goto label_25024c;
        case 0x250250u: goto label_250250;
        case 0x250254u: goto label_250254;
        case 0x250258u: goto label_250258;
        case 0x25025cu: goto label_25025c;
        case 0x250260u: goto label_250260;
        case 0x250264u: goto label_250264;
        case 0x250268u: goto label_250268;
        case 0x25026cu: goto label_25026c;
        case 0x250270u: goto label_250270;
        case 0x250274u: goto label_250274;
        case 0x250278u: goto label_250278;
        case 0x25027cu: goto label_25027c;
        default: break;
    }

    ctx->pc = 0x250238u;

label_250238:
    // 0x250238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25023c:
    // 0x25023c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250240:
    // 0x250240: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_250244:
    if (ctx->pc == 0x250244u) {
        ctx->pc = 0x250244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250240u;
        // 0x250244: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250248u;
        goto label_250248;
    }
    ctx->pc = 0x250240u;
    {
        const bool branch_taken_0x250240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x250244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250240u;
        // 0x250244: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250240) {
            ctx->pc = 0x250250u;
            goto label_250250;
        }
    }
    ctx->pc = 0x250248u;
label_250248:
    // 0x250248: 0x1000000a  b           . + 4 + (0xA << 2)
label_25024c:
    if (ctx->pc == 0x25024Cu) {
        ctx->pc = 0x25024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250248u;
        // 0x25024c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250250u;
        goto label_250250;
    }
    ctx->pc = 0x250248u;
    {
        const bool branch_taken_0x250248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250248u;
        // 0x25024c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250248) {
            ctx->pc = 0x250274u;
            goto label_250274;
        }
    }
    ctx->pc = 0x250250u;
label_250250:
    // 0x250250: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_250254:
    if (ctx->pc == 0x250254u) {
        ctx->pc = 0x250254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250250u;
        // 0x250254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250258u;
        goto label_250258;
    }
    ctx->pc = 0x250250u;
    {
        const bool branch_taken_0x250250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250250u;
        // 0x250254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250250) {
            ctx->pc = 0x250274u;
            goto label_250274;
        }
    }
    ctx->pc = 0x250258u;
label_250258:
    // 0x250258: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x250258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_25025c:
    // 0x25025c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_250260:
    if (ctx->pc == 0x250260u) {
        ctx->pc = 0x250260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25025Cu;
        // 0x250260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250264u;
        goto label_250264;
    }
    ctx->pc = 0x25025Cu;
    {
        const bool branch_taken_0x25025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25025c) {
            ctx->pc = 0x250260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25025Cu;
            // 0x250260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250274u;
            goto label_250274;
        }
    }
    ctx->pc = 0x250264u;
label_250264:
    // 0x250264: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x250264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_250268:
    // 0x250268: 0x40f809  jalr        $v0
label_25026c:
    if (ctx->pc == 0x25026Cu) {
        ctx->pc = 0x25026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250268u;
        // 0x25026c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250270u;
        goto label_250270;
    }
    ctx->pc = 0x250268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250270u);
        ctx->pc = 0x25026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250268u;
        // 0x25026c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250268u, 0x250270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250270u;
label_250270:
    // 0x250270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x250270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250274:
    // 0x250274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250278:
    // 0x250278: 0x3e00008  jr          $ra
label_25027c:
    if (ctx->pc == 0x25027Cu) {
        ctx->pc = 0x25027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250278u;
        // 0x25027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250280u;
        goto label_fallthrough_0x250278;
    }
    ctx->pc = 0x250278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250278u;
        // 0x25027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250278:
    ctx->pc = 0x250280u;
}
