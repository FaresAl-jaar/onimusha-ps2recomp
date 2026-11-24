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

// Function: sub_002E31F0
// Address: 0x2e31f0 - 0x2e32a8
void sub_002E31F0_0x2e31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E31F0_0x2e31f0");
#endif

    ctx->pc = 0x2e31f0u;

    // 0x2e31f0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e31f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e31f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e31f8: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E31F8u;
    {
        const bool branch_taken_0x2e31f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31F8u;
        // 0x2e31fc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31f8) {
            ctx->pc = 0x2E3298u;
            goto label_2e3298;
        }
    }
    ctx->pc = 0x2E3200u;
    // 0x2e3200: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3200u;
    {
        const bool branch_taken_0x2e3200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3200) {
            ctx->pc = 0x2E3278u;
            goto label_2e3278;
        }
    }
    ctx->pc = 0x2E3208u;
    // 0x2e3208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e3208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e320c: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E320Cu;
    {
        const bool branch_taken_0x2e320c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E320Cu;
        // 0x2e3210: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e320c) {
            ctx->pc = 0x2E3258u;
            goto label_2e3258;
        }
    }
    ctx->pc = 0x2E3214u;
    // 0x2e3214: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3214u;
    {
        const bool branch_taken_0x2e3214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3214) {
            ctx->pc = 0x2E3250u;
            goto label_2e3250;
        }
    }
    ctx->pc = 0x2E321Cu;
    // 0x2e321c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E321Cu;
    {
        const bool branch_taken_0x2e321c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e321c) {
            ctx->pc = 0x2E3230u;
            goto label_2e3230;
        }
    }
    ctx->pc = 0x2E3224u;
    // 0x2e3224: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E3224u;
    {
        const bool branch_taken_0x2e3224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3224) {
            ctx->pc = 0x2E32A0u;
            goto label_2e32a0;
        }
    }
    ctx->pc = 0x2E322Cu;
    // 0x2e322c: 0x0  nop
    ctx->pc = 0x2e322cu;
    // NOP
label_2e3230:
    // 0x2e3230: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2e3230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2e3234: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2e3234u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3238: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2e3238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e323c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2e323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2e3240: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2e3240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e3244: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e3244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e3248: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E3248u;
    {
        const bool branch_taken_0x2e3248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3248u;
        // 0x2e324c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3248) {
            ctx->pc = 0x2E32A0u;
            goto label_2e32a0;
        }
    }
    ctx->pc = 0x2E3250u;
label_2e3250:
    // 0x2e3250: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E3250u;
    {
        const bool branch_taken_0x2e3250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3250u;
        // 0x2e3254: 0xa4860004  sh          $a2, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3250) {
            ctx->pc = 0x2E32A0u;
            goto label_2e32a0;
        }
    }
    ctx->pc = 0x2E3258u;
label_2e3258:
    // 0x2e3258: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2e3258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2e325c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2e325cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3260: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2e3260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e3264: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e3264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e3268: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2e3268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e326c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e326cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e3270: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3270u;
    {
        const bool branch_taken_0x2e3270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3270u;
        // 0x2e3274: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3270) {
            ctx->pc = 0x2E32A0u;
            goto label_2e32a0;
        }
    }
    ctx->pc = 0x2E3278u;
label_2e3278:
    // 0x2e3278: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2e3278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2e327c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2e327cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3280: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2e3280u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e3284: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2e3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2e3288: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2e3288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e328c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e328cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e3290: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3290u;
    {
        const bool branch_taken_0x2e3290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3290u;
        // 0x2e3294: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3290) {
            ctx->pc = 0x2E32A0u;
            goto label_2e32a0;
        }
    }
    ctx->pc = 0x2E3298u;
label_2e3298:
    // 0x2e3298: 0xa4860006  sh          $a2, 0x6($a0)
    ctx->pc = 0x2e3298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e329c: 0x0  nop
    ctx->pc = 0x2e329cu;
    // NOP
label_2e32a0:
    // 0x2e32a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E32A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E32A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E32A8u;
}
