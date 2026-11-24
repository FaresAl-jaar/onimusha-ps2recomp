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

// Function: sub_00213248
// Address: 0x213248 - 0x2132b8
void sub_00213248_0x213248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213248_0x213248");
#endif

    switch (ctx->pc) {
        case 0x213248u: goto label_213248;
        case 0x21324cu: goto label_21324c;
        case 0x213250u: goto label_213250;
        case 0x213254u: goto label_213254;
        case 0x213258u: goto label_213258;
        case 0x21325cu: goto label_21325c;
        case 0x213260u: goto label_213260;
        case 0x213264u: goto label_213264;
        case 0x213268u: goto label_213268;
        case 0x21326cu: goto label_21326c;
        case 0x213270u: goto label_213270;
        case 0x213274u: goto label_213274;
        case 0x213278u: goto label_213278;
        case 0x21327cu: goto label_21327c;
        case 0x213280u: goto label_213280;
        case 0x213284u: goto label_213284;
        case 0x213288u: goto label_213288;
        case 0x21328cu: goto label_21328c;
        case 0x213290u: goto label_213290;
        case 0x213294u: goto label_213294;
        case 0x213298u: goto label_213298;
        case 0x21329cu: goto label_21329c;
        case 0x2132a0u: goto label_2132a0;
        case 0x2132a4u: goto label_2132a4;
        case 0x2132a8u: goto label_2132a8;
        case 0x2132acu: goto label_2132ac;
        case 0x2132b0u: goto label_2132b0;
        case 0x2132b4u: goto label_2132b4;
        default: break;
    }

    ctx->pc = 0x213248u;

label_213248:
    // 0x213248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21324c:
    // 0x21324c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_213250:
    // 0x213250: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x213250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_213254:
    // 0x213254: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_213258:
    // 0x213258: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x213258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21325c:
    // 0x21325c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x21325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_213260:
    // 0x213260: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x213260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_213264:
    // 0x213264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_213268:
    // 0x213268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21326c:
    // 0x21326c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_213270:
    // 0x213270: 0xc084e00  jal         func_213800
label_213274:
    if (ctx->pc == 0x213274u) {
        ctx->pc = 0x213274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213270u;
        // 0x213274: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213278u;
        goto label_213278;
    }
    ctx->pc = 0x213270u;
    SET_GPR_U32(ctx, 31, 0x213278u);
    ctx->pc = 0x213274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213270u;
    // 0x213274: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213800u, 0x213270u, 0x213278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213278u;
label_213278:
    // 0x213278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x213278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21327c:
    // 0x21327c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213280:
    // 0x213280: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_213284:
    if (ctx->pc == 0x213284u) {
        ctx->pc = 0x213284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213280u;
        // 0x213284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213288u;
        goto label_213288;
    }
    ctx->pc = 0x213280u;
    {
        const bool branch_taken_0x213280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x213280) {
            ctx->pc = 0x213284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213280u;
            // 0x213284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21329Cu;
            goto label_21329c;
        }
    }
    ctx->pc = 0x213288u;
label_213288:
    // 0x213288: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_21328c:
    if (ctx->pc == 0x21328Cu) {
        ctx->pc = 0x21328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213288u;
        // 0x21328c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213290u;
        goto label_213290;
    }
    ctx->pc = 0x213288u;
    {
        const bool branch_taken_0x213288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213288u;
        // 0x21328c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213288) {
            ctx->pc = 0x213298u;
            goto label_213298;
        }
    }
    ctx->pc = 0x213290u;
label_213290:
    // 0x213290: 0x240f809  jalr        $s2
label_213294:
    if (ctx->pc == 0x213294u) {
        ctx->pc = 0x213294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213290u;
        // 0x213294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213298u;
        goto label_213298;
    }
    ctx->pc = 0x213290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x213298u);
        ctx->pc = 0x213294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213290u;
        // 0x213294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213290u, 0x213298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213298u;
label_213298:
    // 0x213298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x213298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21329c:
    // 0x21329c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21329cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2132a0:
    // 0x2132a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2132a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2132a4:
    // 0x2132a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2132a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2132a8:
    // 0x2132a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2132a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2132ac:
    // 0x2132ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2132acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2132b0:
    // 0x2132b0: 0x3e00008  jr          $ra
label_2132b4:
    if (ctx->pc == 0x2132B4u) {
        ctx->pc = 0x2132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132B0u;
        // 0x2132b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132B8u;
        goto label_fallthrough_0x2132b0;
    }
    ctx->pc = 0x2132B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132B0u;
        // 0x2132b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2132B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2132b0:
    ctx->pc = 0x2132B8u;
}
