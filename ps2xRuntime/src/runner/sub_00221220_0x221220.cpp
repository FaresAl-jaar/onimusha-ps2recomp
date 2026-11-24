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

// Function: sub_00221220
// Address: 0x221220 - 0x2212b8
void sub_00221220_0x221220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221220_0x221220");
#endif

    ctx->pc = 0x221220u;

    // 0x221220: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x221220u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x221224: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x221224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221228: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x221228u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22122c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x221230: 0x12b001a  div         $zero, $t1, $t3
    ctx->pc = 0x221230u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x221234: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x221234u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x221238: 0x3442a574  ori         $v0, $v0, 0xA574
    ctx->pc = 0x221238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42356);
    // 0x22123c: 0x24030706  addiu       $v1, $zero, 0x706
    ctx->pc = 0x22123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1798));
    // 0x221240: 0x71234818  mult1       $t1, $t1, $v1
    ctx->pc = 0x221240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x221244: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x221244u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x221248: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x221248u;
    {
        const bool branch_taken_0x221248 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x221248) {
            ctx->pc = 0x22124Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221248u;
            // 0x22124c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221250u;
            goto label_221250;
        }
    }
    ctx->pc = 0x221250u;
label_221250:
    // 0x221250: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x221250u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x221254: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x221254u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x221258: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x221258u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x22125c: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x221260: 0x7012  mflo        $t6
    ctx->pc = 0x221260u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x221264: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x221264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x221268: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x221268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x22126c: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x22126cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x221270: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x221270u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x221274: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x221274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x221278: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x221278u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x22127c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221280: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x221280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x221284: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x221284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221288: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x22128c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221290: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x221290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x221294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221298: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x221298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22129c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22129cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2212a0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2212a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2212a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2212a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2212a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2212ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2212acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2212b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2212B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2212B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212B0u;
        // 0x2212b4: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2212B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2212B8u;
}
