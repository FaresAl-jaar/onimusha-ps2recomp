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

// Function: sub_001E31E0
// Address: 0x1e31e0 - 0x1e32dc
void sub_001E31E0_0x1e31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E31E0_0x1e31e0");
#endif

    switch (ctx->pc) {
        case 0x1e31e0u: goto label_1e31e0;
        case 0x1e31e4u: goto label_1e31e4;
        case 0x1e31e8u: goto label_1e31e8;
        case 0x1e31ecu: goto label_1e31ec;
        case 0x1e31f0u: goto label_1e31f0;
        case 0x1e31f4u: goto label_1e31f4;
        case 0x1e31f8u: goto label_1e31f8;
        case 0x1e31fcu: goto label_1e31fc;
        case 0x1e3200u: goto label_1e3200;
        case 0x1e3204u: goto label_1e3204;
        case 0x1e3208u: goto label_1e3208;
        case 0x1e320cu: goto label_1e320c;
        case 0x1e3210u: goto label_1e3210;
        case 0x1e3214u: goto label_1e3214;
        case 0x1e3218u: goto label_1e3218;
        case 0x1e321cu: goto label_1e321c;
        case 0x1e3220u: goto label_1e3220;
        case 0x1e3224u: goto label_1e3224;
        case 0x1e3228u: goto label_1e3228;
        case 0x1e322cu: goto label_1e322c;
        case 0x1e3230u: goto label_1e3230;
        case 0x1e3234u: goto label_1e3234;
        case 0x1e3238u: goto label_1e3238;
        case 0x1e323cu: goto label_1e323c;
        case 0x1e3240u: goto label_1e3240;
        case 0x1e3244u: goto label_1e3244;
        case 0x1e3248u: goto label_1e3248;
        case 0x1e324cu: goto label_1e324c;
        case 0x1e3250u: goto label_1e3250;
        case 0x1e3254u: goto label_1e3254;
        case 0x1e3258u: goto label_1e3258;
        case 0x1e325cu: goto label_1e325c;
        case 0x1e3260u: goto label_1e3260;
        case 0x1e3264u: goto label_1e3264;
        case 0x1e3268u: goto label_1e3268;
        case 0x1e326cu: goto label_1e326c;
        case 0x1e3270u: goto label_1e3270;
        case 0x1e3274u: goto label_1e3274;
        case 0x1e3278u: goto label_1e3278;
        case 0x1e327cu: goto label_1e327c;
        case 0x1e3280u: goto label_1e3280;
        case 0x1e3284u: goto label_1e3284;
        case 0x1e3288u: goto label_1e3288;
        case 0x1e328cu: goto label_1e328c;
        case 0x1e3290u: goto label_1e3290;
        case 0x1e3294u: goto label_1e3294;
        case 0x1e3298u: goto label_1e3298;
        case 0x1e329cu: goto label_1e329c;
        case 0x1e32a0u: goto label_1e32a0;
        case 0x1e32a4u: goto label_1e32a4;
        case 0x1e32a8u: goto label_1e32a8;
        case 0x1e32acu: goto label_1e32ac;
        case 0x1e32b0u: goto label_1e32b0;
        case 0x1e32b4u: goto label_1e32b4;
        case 0x1e32b8u: goto label_1e32b8;
        case 0x1e32bcu: goto label_1e32bc;
        case 0x1e32c0u: goto label_1e32c0;
        case 0x1e32c4u: goto label_1e32c4;
        case 0x1e32c8u: goto label_1e32c8;
        case 0x1e32ccu: goto label_1e32cc;
        case 0x1e32d0u: goto label_1e32d0;
        case 0x1e32d4u: goto label_1e32d4;
        case 0x1e32d8u: goto label_1e32d8;
        default: break;
    }

    ctx->pc = 0x1e31e0u;

label_1e31e0:
    // 0x1e31e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e31e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e31e4:
    // 0x1e31e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e31e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e31e8:
    // 0x1e31e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e31ec:
    // 0x1e31ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e31ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e31f0:
    // 0x1e31f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e31f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e31f4:
    // 0x1e31f4: 0xc078684  jal         func_1E1A10
label_1e31f8:
    if (ctx->pc == 0x1E31F8u) {
        ctx->pc = 0x1E31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31F4u;
        // 0x1e31f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E31FCu;
        goto label_1e31fc;
    }
    ctx->pc = 0x1E31F4u;
    SET_GPR_U32(ctx, 31, 0x1E31FCu);
    ctx->pc = 0x1E31F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E31F4u;
    // 0x1e31f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E31F4u, 0x1E31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E31FCu;
label_1e31fc:
    // 0x1e31fc: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1e31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_1e3200:
    // 0x1e3200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3204:
    // 0x1e3204: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1e3204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e3208:
    // 0x1e3208: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1e3208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1e320c:
    // 0x1e320c: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x1e320cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
label_1e3210:
    // 0x1e3210: 0xa202003c  sb          $v0, 0x3C($s0)
    ctx->pc = 0x1e3210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
label_1e3214:
    // 0x1e3214: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3218:
    // 0x1e3218: 0x78420060  lq          $v0, 0x60($v0)
    ctx->pc = 0x1e3218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 96)));
label_1e321c:
    // 0x1e321c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1e321cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_1e3220:
    // 0x1e3220: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3224:
    // 0x1e3224: 0x78420060  lq          $v0, 0x60($v0)
    ctx->pc = 0x1e3224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 96)));
label_1e3228:
    // 0x1e3228: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e3228u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e322c:
    // 0x1e322c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e322cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e3230:
    // 0x1e3230: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3234:
    // 0x1e3234: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1e3234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e3238:
    // 0x1e3238: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e3238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e323c:
    // 0x1e323c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3240:
    // 0x1e3240: 0xc0741a4  jal         func_1D0690
label_1e3244:
    if (ctx->pc == 0x1E3244u) {
        ctx->pc = 0x1E3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3240u;
        // 0x1e3244: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3248u;
        goto label_1e3248;
    }
    ctx->pc = 0x1E3240u;
    SET_GPR_U32(ctx, 31, 0x1E3248u);
    ctx->pc = 0x1E3244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3240u;
    // 0x1e3244: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E3240u, 0x1E3248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3248u;
label_1e3248:
    // 0x1e3248: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1e3248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1e324c:
    // 0x1e324c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e3250:
    // 0x1e3250: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e3254:
    if (ctx->pc == 0x1E3254u) {
        ctx->pc = 0x1E3258u;
        goto label_1e3258;
    }
    ctx->pc = 0x1E3250u;
    {
        const bool branch_taken_0x1e3250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3250) {
            ctx->pc = 0x1E3270u;
            goto label_1e3270;
        }
    }
    ctx->pc = 0x1E3258u;
label_1e3258:
    // 0x1e3258: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e3258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e325c:
    // 0x1e325c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e325cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e3260:
    // 0x1e3260: 0x320f809  jalr        $t9
label_1e3264:
    if (ctx->pc == 0x1E3264u) {
        ctx->pc = 0x1E3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3260u;
        // 0x1e3264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3268u;
        goto label_1e3268;
    }
    ctx->pc = 0x1E3260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3268u);
        ctx->pc = 0x1E3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3260u;
        // 0x1e3264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3260u, 0x1E3268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3268u;
label_1e3268:
    // 0x1e3268: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e326c:
    if (ctx->pc == 0x1E326Cu) {
        ctx->pc = 0x1E326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3268u;
        // 0x1e326c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3270u;
        goto label_1e3270;
    }
    ctx->pc = 0x1E3268u;
    {
        const bool branch_taken_0x1e3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3268u;
        // 0x1e326c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3268) {
            ctx->pc = 0x1E32C8u;
            goto label_1e32c8;
        }
    }
    ctx->pc = 0x1E3270u;
label_1e3270:
    // 0x1e3270: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e3270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3274:
    // 0x1e3274: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1e3274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1e3278:
    // 0x1e3278: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e3278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e327c:
    // 0x1e327c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1e3280:
    if (ctx->pc == 0x1E3280u) {
        ctx->pc = 0x1E3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E327Cu;
        // 0x1e3280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3284u;
        goto label_1e3284;
    }
    ctx->pc = 0x1E327Cu;
    {
        const bool branch_taken_0x1e327c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E327Cu;
        // 0x1e3280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e327c) {
            ctx->pc = 0x1E32B8u;
            goto label_1e32b8;
        }
    }
    ctx->pc = 0x1E3284u;
label_1e3284:
    // 0x1e3284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3288:
    // 0x1e3288: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e3288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e328c:
    // 0x1e328c: 0x0  nop
    ctx->pc = 0x1e328cu;
    // NOP
label_1e3290:
    // 0x1e3290: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e3294:
    // 0x1e3294: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e3294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e3298:
    // 0x1e3298: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e3298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e329c:
    // 0x1e329c: 0xa4430044  sh          $v1, 0x44($v0)
    ctx->pc = 0x1e329cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 3));
label_1e32a0:
    // 0x1e32a0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e32a4:
    // 0x1e32a4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1e32a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1e32a8:
    // 0x1e32a8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1e32a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e32ac:
    // 0x1e32ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1e32b0:
    if (ctx->pc == 0x1E32B0u) {
        ctx->pc = 0x1E32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32ACu;
        // 0x1e32b0: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32B4u;
        goto label_1e32b4;
    }
    ctx->pc = 0x1E32ACu;
    {
        const bool branch_taken_0x1e32ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32ACu;
        // 0x1e32b0: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32ac) {
            ctx->pc = 0x1E3290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3290;
        }
    }
    ctx->pc = 0x1E32B4u;
label_1e32b4:
    // 0x1e32b4: 0x0  nop
    ctx->pc = 0x1e32b4u;
    // NOP
label_1e32b8:
    // 0x1e32b8: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1e32b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1e32bc:
    // 0x1e32bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e32c0:
    // 0x1e32c0: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x1e32c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
label_1e32c4:
    // 0x1e32c4: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x1e32c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
label_1e32c8:
    // 0x1e32c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e32c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e32cc:
    // 0x1e32cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e32ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e32d0:
    // 0x1e32d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e32d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e32d4:
    // 0x1e32d4: 0x3e00008  jr          $ra
label_1e32d8:
    if (ctx->pc == 0x1E32D8u) {
        ctx->pc = 0x1E32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D4u;
        // 0x1e32d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32DCu;
        goto label_fallthrough_0x1e32d4;
    }
    ctx->pc = 0x1E32D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D4u;
        // 0x1e32d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e32d4:
    ctx->pc = 0x1E32DCu;
}
