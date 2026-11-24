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

// Function: sub_00234298
// Address: 0x234298 - 0x234364
void sub_00234298_0x234298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234298_0x234298");
#endif

    switch (ctx->pc) {
        case 0x2342e8u: goto label_2342e8;
        case 0x2342f8u: goto label_2342f8;
        case 0x234300u: goto label_234300;
        case 0x234308u: goto label_234308;
        default: break;
    }

    ctx->pc = 0x234298u;

    // 0x234298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23429c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2342a0: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x2342a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x2342a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2342a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2342a8: 0x26c3fd20  addiu       $v1, $s6, -0x2E0
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966560));
    // 0x2342ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2342acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2342b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2342b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2342b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2342b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2342b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2342b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2342bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2342bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2342c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2342c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2342c4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2342c4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4BFD20u));
    // 0x2342c8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2342C8u;
    {
        const bool branch_taken_0x2342c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342C8u;
        // 0x2342cc: 0x3c15004c  lui         $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342c8) {
            ctx->pc = 0x234320u;
            goto label_234320;
        }
    }
    ctx->pc = 0x2342D0u;
    // 0x2342d0: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x2342d4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2342d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2342d8: 0x26b2fd18  addiu       $s2, $s5, -0x2E8
    ctx->pc = 0x2342d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966552));
    // 0x2342dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2342dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2342e0: 0x2690fcc0  addiu       $s0, $s4, -0x340
    ctx->pc = 0x2342e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966464));
    // 0x2342e4: 0x0  nop
    ctx->pc = 0x2342e4u;
    // NOP
label_2342e8:
    // 0x2342e8: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x2342e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x2342ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2342ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2342f0: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x2342F0u;
    SET_GPR_U32(ctx, 31, 0x2342F8u);
    ctx->pc = 0x2342F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342F0u;
    // 0x2342f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x2342F0u, 0x2342F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342F8u;
label_2342f8:
    // 0x2342f8: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x2342F8u;
    SET_GPR_U32(ctx, 31, 0x234300u);
    ctx->pc = 0x2342FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342F8u;
    // 0x2342fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x2342F8u, 0x234300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234300u;
label_234300:
    // 0x234300: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x234300u;
    SET_GPR_U32(ctx, 31, 0x234308u);
    ctx->pc = 0x234304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234300u;
    // 0x234304: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x234300u, 0x234308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234308u;
label_234308:
    // 0x234308: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x234308u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23430c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x23430Cu;
    {
        const bool branch_taken_0x23430c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23430Cu;
        // 0x234310: 0x26c2fd20  addiu       $v0, $s6, -0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23430c) {
            ctx->pc = 0x2342E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2342e8;
        }
    }
    ctx->pc = 0x234314u;
    // 0x234314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234314u;
    {
        const bool branch_taken_0x234314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234314u;
        // 0x234318: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234314) {
            ctx->pc = 0x23432Cu;
            goto label_23432c;
        }
    }
    ctx->pc = 0x23431Cu;
    // 0x23431c: 0x0  nop
    ctx->pc = 0x23431cu;
    // NOP
label_234320:
    // 0x234320: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x234320u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x234324: 0x26c2fd20  addiu       $v0, $s6, -0x2E0
    ctx->pc = 0x234324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966560));
    // 0x234328: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x234328u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23432c:
    // 0x23432c: 0x26a3fd18  addiu       $v1, $s5, -0x2E8
    ctx->pc = 0x23432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966552));
    // 0x234330: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x234330u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x234334: 0x2684fcc0  addiu       $a0, $s4, -0x340
    ctx->pc = 0x234334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966464));
    // 0x234338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x234338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234348: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23434c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x23434cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x234350: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x234350u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x234354: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x234354u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x234358: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x234358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23435c: 0x3e00008  jr          $ra
    ctx->pc = 0x23435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23435Cu;
        // 0x234360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23435Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234364u;
}
