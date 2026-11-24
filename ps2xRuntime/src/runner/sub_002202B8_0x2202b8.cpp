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

// Function: sub_002202B8
// Address: 0x2202b8 - 0x22033c
void sub_002202B8_0x2202b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002202B8_0x2202b8");
#endif

    switch (ctx->pc) {
        case 0x2202f8u: goto label_2202f8;
        case 0x220304u: goto label_220304;
        case 0x220314u: goto label_220314;
        default: break;
    }

    ctx->pc = 0x2202b8u;

    // 0x2202b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2202b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2202bc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2202bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2202c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2202c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2202c4: 0x2463a178  addiu       $v1, $v1, -0x5E88
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943096));
    // 0x2202c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2202c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2202cc: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x2202ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2202d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2202d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2202d4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2202d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2202d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2202d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2202dc: 0x24710054  addiu       $s1, $v1, 0x54
    ctx->pc = 0x2202dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2202e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2202e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2202e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2202e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA178u));
    // 0x2202e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2202ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2202ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BA178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA178u, _value); } while (0);
    // 0x2202f0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2202f0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4BA1CCu));
    // 0x2202f4: 0x0  nop
    ctx->pc = 0x2202f4u;
    // NOP
label_2202f8:
    // 0x2202f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2202f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2202fc: 0xc084968  jal         func_2125A0
    ctx->pc = 0x2202FCu;
    SET_GPR_U32(ctx, 31, 0x220304u);
    ctx->pc = 0x220300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202FCu;
    // 0x220300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x2202FCu, 0x220304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220304u;
label_220304:
    // 0x220304: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x220304u;
    {
        const bool branch_taken_0x220304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x220308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220304u;
        // 0x220308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220304) {
            ctx->pc = 0x220314u;
            goto label_220314;
        }
    }
    ctx->pc = 0x22030Cu;
    // 0x22030c: 0xc0880d0  jal         func_220340
    ctx->pc = 0x22030Cu;
    SET_GPR_U32(ctx, 31, 0x220314u);
    ctx->pc = 0x220340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220340u, 0x22030Cu, 0x220314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220314u;
label_220314:
    // 0x220314: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x220318: 0x643fff7  bgezl       $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x220318u;
    {
        const bool branch_taken_0x220318 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x220318) {
            ctx->pc = 0x22031Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220318u;
            // 0x22031c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2202F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2202f8;
        }
    }
    ctx->pc = 0x220320u;
    // 0x220320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22032c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22032cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x220330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220334: 0x3e00008  jr          $ra
    ctx->pc = 0x220334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220334u;
        // 0x220338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22033Cu;
}
