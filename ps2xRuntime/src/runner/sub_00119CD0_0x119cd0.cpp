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

// Function: sub_00119CD0
// Address: 0x119cd0 - 0x119d2c
void sub_00119CD0_0x119cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119CD0_0x119cd0");
#endif

    switch (ctx->pc) {
        case 0x119cd0u: goto label_119cd0;
        case 0x119cd4u: goto label_119cd4;
        case 0x119cd8u: goto label_119cd8;
        case 0x119cdcu: goto label_119cdc;
        case 0x119ce0u: goto label_119ce0;
        case 0x119ce4u: goto label_119ce4;
        case 0x119ce8u: goto label_119ce8;
        case 0x119cecu: goto label_119cec;
        case 0x119cf0u: goto label_119cf0;
        case 0x119cf4u: goto label_119cf4;
        case 0x119cf8u: goto label_119cf8;
        case 0x119cfcu: goto label_119cfc;
        case 0x119d00u: goto label_119d00;
        case 0x119d04u: goto label_119d04;
        case 0x119d08u: goto label_119d08;
        case 0x119d0cu: goto label_119d0c;
        case 0x119d10u: goto label_119d10;
        case 0x119d14u: goto label_119d14;
        case 0x119d18u: goto label_119d18;
        case 0x119d1cu: goto label_119d1c;
        case 0x119d20u: goto label_119d20;
        case 0x119d24u: goto label_119d24;
        case 0x119d28u: goto label_119d28;
        default: break;
    }

    ctx->pc = 0x119cd0u;

label_119cd0:
    // 0x119cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_119cd4:
    // 0x119cd4: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x119cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_119cd8:
    // 0x119cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_119cdc:
    // 0x119cdc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x119cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_119ce0:
    // 0x119ce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_119ce4:
    // 0x119ce4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x119ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_119ce8:
    // 0x119ce8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x119ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_119cec:
    // 0x119cec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x119cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_119cf0:
    // 0x119cf0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x119cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_119cf4:
    // 0x119cf4: 0x40f809  jalr        $v0
label_119cf8:
    if (ctx->pc == 0x119CF8u) {
        ctx->pc = 0x119CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CF4u;
        // 0x119cf8: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x119CFCu;
        goto label_119cfc;
    }
    ctx->pc = 0x119CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x119CFCu);
        ctx->pc = 0x119CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CF4u;
        // 0x119cf8: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119CF4u, 0x119CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119CFCu;
label_119cfc:
    // 0x119cfc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_119d00:
    if (ctx->pc == 0x119D00u) {
        ctx->pc = 0x119D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CFCu;
        // 0x119d00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119D04u;
        goto label_119d04;
    }
    ctx->pc = 0x119CFCu;
    {
        const bool branch_taken_0x119cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CFCu;
        // 0x119d00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cfc) {
            ctx->pc = 0x119D20u;
            goto label_119d20;
        }
    }
    ctx->pc = 0x119D04u;
label_119d04:
    // 0x119d04: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x119d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_119d08:
    // 0x119d08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119d0c:
    // 0x119d0c: 0x8c643f40  lw          $a0, 0x3F40($v1)
    ctx->pc = 0x119d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16192)));
label_119d10:
    // 0x119d10: 0xac703f40  sw          $s0, 0x3F40($v1)
    ctx->pc = 0x119d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16192), GPR_U32(ctx, 16));
label_119d14:
    // 0x119d14: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x119d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_119d18:
    // 0x119d18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x119d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_119d1c:
    // 0x119d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_119d20:
    // 0x119d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119d24:
    // 0x119d24: 0x3e00008  jr          $ra
label_119d28:
    if (ctx->pc == 0x119D28u) {
        ctx->pc = 0x119D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D24u;
        // 0x119d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119D2Cu;
        goto label_fallthrough_0x119d24;
    }
    ctx->pc = 0x119D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D24u;
        // 0x119d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119d24:
    ctx->pc = 0x119D2Cu;
}
