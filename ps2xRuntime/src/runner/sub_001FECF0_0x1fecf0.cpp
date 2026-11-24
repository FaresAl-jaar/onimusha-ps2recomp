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

// Function: sub_001FECF0
// Address: 0x1fecf0 - 0x1fedb4
void sub_001FECF0_0x1fecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FECF0_0x1fecf0");
#endif

    switch (ctx->pc) {
        case 0x1fed1cu: goto label_1fed1c;
        default: break;
    }

    ctx->pc = 0x1fecf0u;

    // 0x1fecf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fecf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fecf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fecf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fed00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fed00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fed08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fed08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fed10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fed14: 0xc080496  jal         func_201258
    ctx->pc = 0x1FED14u;
    SET_GPR_U32(ctx, 31, 0x1FED1Cu);
    ctx->pc = 0x1FED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED14u;
    // 0x1fed18: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FED14u, 0x1FED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED1Cu;
label_1fed1c:
    // 0x1fed1c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fed20: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x1fed20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x1fed24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed28: 0x34a5020f  ori         $a1, $a1, 0x20F
    ctx->pc = 0x1fed28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
    // 0x1fed2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FED2Cu;
    {
        const bool branch_taken_0x1fed2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED2Cu;
        // 0x1fed30: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed2c) {
            ctx->pc = 0x1FED50u;
            goto label_1fed50;
        }
    }
    ctx->pc = 0x1FED34u;
    // 0x1fed34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fed34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fed38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fed3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fed3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fed40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fed40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fed44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fed44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fed48: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FED48u;
    ctx->pc = 0x1FED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED48u;
    // 0x1fed4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FED50u;
label_1fed50:
    // 0x1fed50: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1fed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1fed54: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1fed54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1fed58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fed58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fed5c: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x1fed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x1fed60: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1fed60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1fed64: 0x8e0402a8  lw          $a0, 0x2A8($s0)
    ctx->pc = 0x1fed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1fed68: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED68u;
    {
        const bool branch_taken_0x1fed68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x1fed68) {
            ctx->pc = 0x1FED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED68u;
            // 0x1fed6c: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED78u;
            goto label_1fed78;
        }
    }
    ctx->pc = 0x1FED70u;
    // 0x1fed70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FED70u;
    {
        const bool branch_taken_0x1fed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED70u;
        // 0x1fed74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed70) {
            ctx->pc = 0x1FED90u;
            goto label_1fed90;
        }
    }
    ctx->pc = 0x1FED78u;
label_1fed78:
    // 0x1fed78: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x1fed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1fed7c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FED7Cu;
    {
        const bool branch_taken_0x1fed7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed7c) {
            ctx->pc = 0x1FED80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED7Cu;
            // 0x1fed80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED84u;
            goto label_1fed84;
        }
    }
    ctx->pc = 0x1FED84u;
label_1fed84:
    // 0x1fed84: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1fed84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fed88: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1fed88u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fed8c: 0x1012  mflo        $v0
    ctx->pc = 0x1fed8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1fed90:
    // 0x1fed90: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fed90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1fed94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fed94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fed98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fed9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feda0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1feda0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feda4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1feda4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1feda8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1feda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fedac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDACu;
        // 0x1fedb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEDB4u;
}
