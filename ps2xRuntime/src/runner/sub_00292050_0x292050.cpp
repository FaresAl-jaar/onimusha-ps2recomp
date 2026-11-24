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

// Function: sub_00292050
// Address: 0x292050 - 0x2920e8
void sub_00292050_0x292050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292050_0x292050");
#endif

    switch (ctx->pc) {
        case 0x292090u: goto label_292090;
        case 0x2920a8u: goto label_2920a8;
        case 0x2920c0u: goto label_2920c0;
        default: break;
    }

    ctx->pc = 0x292050u;

    // 0x292050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29205c: 0xa0802b0d  sb          $zero, 0x2B0D($a0)
    ctx->pc = 0x29205cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11021), (uint8_t)GPR_U32(ctx, 0));
    // 0x292060: 0x90832b0b  lbu         $v1, 0x2B0B($a0)
    ctx->pc = 0x292060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11019)));
    // 0x292064: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x292064u;
    {
        const bool branch_taken_0x292064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292064u;
        // 0x292068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292064) {
            ctx->pc = 0x2920D8u;
            goto label_2920d8;
        }
    }
    ctx->pc = 0x29206Cu;
    // 0x29206c: 0x92032b0e  lbu         $v1, 0x2B0E($s0)
    ctx->pc = 0x29206cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11022)));
    // 0x292070: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x292070u;
    {
        const bool branch_taken_0x292070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x292070) {
            ctx->pc = 0x2920C0u;
            goto label_2920c0;
        }
    }
    ctx->pc = 0x292078u;
    // 0x292078: 0x92032b0c  lbu         $v1, 0x2B0C($s0)
    ctx->pc = 0x292078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11020)));
    // 0x29207c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29207cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x292080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x292080u;
    {
        const bool branch_taken_0x292080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292080) {
            ctx->pc = 0x292090u;
            goto label_292090;
        }
    }
    ctx->pc = 0x292088u;
    // 0x292088: 0xc0a47b0  jal         func_291EC0
    ctx->pc = 0x292088u;
    SET_GPR_U32(ctx, 31, 0x292090u);
    ctx->pc = 0x291EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291EC0u, 0x292088u, 0x292090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292090u;
label_292090:
    // 0x292090: 0x92032b0c  lbu         $v1, 0x2B0C($s0)
    ctx->pc = 0x292090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11020)));
    // 0x292094: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x292094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x292098: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x292098u;
    {
        const bool branch_taken_0x292098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292098u;
        // 0x29209c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292098) {
            ctx->pc = 0x2920A8u;
            goto label_2920a8;
        }
    }
    ctx->pc = 0x2920A0u;
    // 0x2920a0: 0xc0a4774  jal         func_291DD0
    ctx->pc = 0x2920A0u;
    SET_GPR_U32(ctx, 31, 0x2920A8u);
    ctx->pc = 0x291DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DD0u, 0x2920A0u, 0x2920A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920A8u;
label_2920a8:
    // 0x2920a8: 0x92032b0c  lbu         $v1, 0x2B0C($s0)
    ctx->pc = 0x2920a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11020)));
    // 0x2920ac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2920acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2920b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2920B0u;
    {
        const bool branch_taken_0x2920b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2920B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920B0u;
        // 0x2920b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920b0) {
            ctx->pc = 0x2920C0u;
            goto label_2920c0;
        }
    }
    ctx->pc = 0x2920B8u;
    // 0x2920b8: 0xc0a4788  jal         func_291E20
    ctx->pc = 0x2920B8u;
    SET_GPR_U32(ctx, 31, 0x2920C0u);
    ctx->pc = 0x291E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291E20u, 0x2920B8u, 0x2920C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920C0u;
label_2920c0:
    // 0x2920c0: 0x86032b10  lh          $v1, 0x2B10($s0)
    ctx->pc = 0x2920c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11024)));
    // 0x2920c4: 0x28617ff0  slti        $at, $v1, 0x7FF0
    ctx->pc = 0x2920c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x2920c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2920C8u;
    {
        const bool branch_taken_0x2920c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2920c8) {
            ctx->pc = 0x2920D8u;
            goto label_2920d8;
        }
    }
    ctx->pc = 0x2920D0u;
    // 0x2920d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2920d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2920d4: 0xa6032b10  sh          $v1, 0x2B10($s0)
    ctx->pc = 0x2920d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11024), (uint16_t)GPR_U32(ctx, 3));
label_2920d8:
    // 0x2920d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2920d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2920dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2920dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2920e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2920E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2920E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920E0u;
        // 0x2920e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2920E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2920E8u;
}
