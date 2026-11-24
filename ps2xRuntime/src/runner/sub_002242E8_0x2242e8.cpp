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

// Function: sub_002242E8
// Address: 0x2242e8 - 0x224350
void sub_002242E8_0x2242e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002242E8_0x2242e8");
#endif

    switch (ctx->pc) {
        case 0x224314u: goto label_224314;
        default: break;
    }

    ctx->pc = 0x2242e8u;

    // 0x2242e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2242e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2242ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2242ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2242f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2242f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2242f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2242f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2242f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2242fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2242fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224300: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224304: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x224304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224308: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x224308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22430c: 0xc088e5e  jal         func_223978
    ctx->pc = 0x22430Cu;
    SET_GPR_U32(ctx, 31, 0x224314u);
    ctx->pc = 0x224310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22430Cu;
    // 0x224310: 0x245100b0  addiu       $s1, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x22430Cu, 0x224314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224314u;
label_224314:
    // 0x224314: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x224314u;
    {
        const bool branch_taken_0x224314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224314) {
            ctx->pc = 0x224318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224314u;
            // 0x224318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22433Cu;
            goto label_22433c;
        }
    }
    ctx->pc = 0x22431Cu;
    // 0x22431c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x22431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x224320: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x224320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x224324: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224324u;
    {
        const bool branch_taken_0x224324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224324u;
        // 0x224328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224324) {
            ctx->pc = 0x224338u;
            goto label_224338;
        }
    }
    ctx->pc = 0x22432Cu;
    // 0x22432c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x22432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x224330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224334: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224338:
    // 0x224338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22433c:
    // 0x22433c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22433cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224340: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224344: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224348: 0x3e00008  jr          $ra
    ctx->pc = 0x224348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224348u;
        // 0x22434c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224350u;
}
