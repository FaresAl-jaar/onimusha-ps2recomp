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

// Function: sub_0022C198
// Address: 0x22c198 - 0x22c29c
void sub_0022C198_0x22c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C198_0x22c198");
#endif

    ctx->pc = 0x22c198u;

    // 0x22c198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c19c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x22c19cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c1a4: 0x27050048  addiu       $a1, $t8, 0x48
    ctx->pc = 0x22c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 72));
    // 0x22c1a8: 0x8cae0008  lw          $t6, 0x8($a1)
    ctx->pc = 0x22c1a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22c1ac: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x22c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22c1b0: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22C1B0u;
    {
        const bool branch_taken_0x22c1b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1b0) {
            ctx->pc = 0x22C1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1B0u;
            // 0x22c1b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C1B8u;
            goto label_22c1b8;
        }
    }
    ctx->pc = 0x22C1B8u;
label_22c1b8:
    // 0x22c1b8: 0x8caf0018  lw          $t7, 0x18($a1)
    ctx->pc = 0x22c1b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x22c1bc: 0xce001a  div         $zero, $a2, $t6
    ctx->pc = 0x22c1bcu;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c1c0: 0x8ca80020  lw          $t0, 0x20($a1)
    ctx->pc = 0x22c1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x22c1c4: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x22c1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22c1c8: 0x1e81023  subu        $v0, $t7, $t0
    ctx->pc = 0x22c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x22c1cc: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x22c1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x22c1d0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22c1d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22c1d8: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x22c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x22c1dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22c1e0: 0x8cac0024  lw          $t4, 0x24($a1)
    ctx->pc = 0x22c1e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x22c1e4: 0xec382a  slt         $a3, $a3, $t4
    ctx->pc = 0x22c1e4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x22c1e8: 0x3012  mflo        $a2
    ctx->pc = 0x22c1e8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22c1ec: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x22c1ecu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c1f0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x22c1f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1f4: 0x1012  mflo        $v0
    ctx->pc = 0x22c1f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22c1f8: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x22c1f8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c1fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x22c1fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c200: 0x6812  mflo        $t5
    ctx->pc = 0x22c200u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x22c204: 0x2810  mfhi        $a1
    ctx->pc = 0x22c204u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22c208: 0x1691818  mult        $v1, $t3, $t1
    ctx->pc = 0x22c208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22c20c: 0x1252823  subu        $a1, $t1, $a1
    ctx->pc = 0x22c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x22c210: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x22c210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x22c214: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22c218: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C218u;
    {
        const bool branch_taken_0x22c218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C218u;
        // 0x22c21c: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c218) {
            ctx->pc = 0x22C22Cu;
            goto label_22c22c;
        }
    }
    ctx->pc = 0x22C220u;
    // 0x22c220: 0x1051023  subu        $v0, $t0, $a1
    ctx->pc = 0x22c220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x22c224: 0x4f102a  slt         $v0, $v0, $t7
    ctx->pc = 0x22c224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x22c228: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x22c228u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_22c22c:
    // 0x22c22c: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x22c22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22c230: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c234: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22C234u;
    {
        const bool branch_taken_0x22c234 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c234) {
            ctx->pc = 0x22C238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C234u;
            // 0x22c238: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C23Cu;
            goto label_22c23c;
        }
    }
    ctx->pc = 0x22C23Cu;
label_22c23c:
    // 0x22c23c: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x22c23cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x22c240: 0x189001a  div         $zero, $t4, $t1
    ctx->pc = 0x22c240u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c244: 0x2812  mflo        $a1
    ctx->pc = 0x22c244u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x22c248: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x22c248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x22c24c: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x22c24cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x22c250: 0x1aa182a  slt         $v1, $t5, $t2
    ctx->pc = 0x22c250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x22c254: 0x1a3500b  movn        $t2, $t5, $v1
    ctx->pc = 0x22c254u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 13));
    // 0x22c258: 0x16a102a  slt         $v0, $t3, $t2
    ctx->pc = 0x22c258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x22c25c: 0x15c60006  bne         $t6, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C25Cu;
    {
        const bool branch_taken_0x22c25c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 6));
        ctx->pc = 0x22C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C25Cu;
        // 0x22c260: 0x162500b  movn        $t2, $t3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c25c) {
            ctx->pc = 0x22C278u;
            goto label_22c278;
        }
    }
    ctx->pc = 0x22C264u;
    // 0x22c264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c268: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x22c268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c26c: 0x808b03a  j           func_22C0E8
    ctx->pc = 0x22C26Cu;
    ctx->pc = 0x22C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C26Cu;
    // 0x22c270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C0E8u;
    sub_0022C0E8_0x22c0e8(rdram, ctx, runtime); return;
    ctx->pc = 0x22C274u;
    // 0x22c274: 0x0  nop
    ctx->pc = 0x22c274u;
    // NOP
label_22c278:
    // 0x22c278: 0x8f0200e8  lw          $v0, 0xE8($t8)
    ctx->pc = 0x22c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 232)));
    // 0x22c27c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C27Cu;
    {
        const bool branch_taken_0x22c27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C27Cu;
        // 0x22c280: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c27c) {
            ctx->pc = 0x22C290u;
            goto label_22c290;
        }
    }
    ctx->pc = 0x22C284u;
    // 0x22c284: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x22c284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c288: 0x808b050  j           func_22C140
    ctx->pc = 0x22C288u;
    ctx->pc = 0x22C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C288u;
    // 0x22c28c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C140u;
    sub_0022C140_0x22c140(rdram, ctx, runtime); return;
    ctx->pc = 0x22C290u;
label_22c290:
    // 0x22c290: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x22c290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c294: 0x808b026  j           func_22C098
    ctx->pc = 0x22C294u;
    ctx->pc = 0x22C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C294u;
    // 0x22c298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C098u;
    sub_0022C098_0x22c098(rdram, ctx, runtime); return;
    ctx->pc = 0x22C29Cu;
}
