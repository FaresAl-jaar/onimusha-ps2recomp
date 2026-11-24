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

// Function: sub_0021CD90
// Address: 0x21cd90 - 0x21ce48
void sub_0021CD90_0x21cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD90_0x21cd90");
#endif

    switch (ctx->pc) {
        case 0x21cd90u: goto label_21cd90;
        case 0x21cd94u: goto label_21cd94;
        case 0x21cd98u: goto label_21cd98;
        case 0x21cd9cu: goto label_21cd9c;
        case 0x21cda0u: goto label_21cda0;
        case 0x21cda4u: goto label_21cda4;
        case 0x21cda8u: goto label_21cda8;
        case 0x21cdacu: goto label_21cdac;
        case 0x21cdb0u: goto label_21cdb0;
        case 0x21cdb4u: goto label_21cdb4;
        case 0x21cdb8u: goto label_21cdb8;
        case 0x21cdbcu: goto label_21cdbc;
        case 0x21cdc0u: goto label_21cdc0;
        case 0x21cdc4u: goto label_21cdc4;
        case 0x21cdc8u: goto label_21cdc8;
        case 0x21cdccu: goto label_21cdcc;
        case 0x21cdd0u: goto label_21cdd0;
        case 0x21cdd4u: goto label_21cdd4;
        case 0x21cdd8u: goto label_21cdd8;
        case 0x21cddcu: goto label_21cddc;
        case 0x21cde0u: goto label_21cde0;
        case 0x21cde4u: goto label_21cde4;
        case 0x21cde8u: goto label_21cde8;
        case 0x21cdecu: goto label_21cdec;
        case 0x21cdf0u: goto label_21cdf0;
        case 0x21cdf4u: goto label_21cdf4;
        case 0x21cdf8u: goto label_21cdf8;
        case 0x21cdfcu: goto label_21cdfc;
        case 0x21ce00u: goto label_21ce00;
        case 0x21ce04u: goto label_21ce04;
        case 0x21ce08u: goto label_21ce08;
        case 0x21ce0cu: goto label_21ce0c;
        case 0x21ce10u: goto label_21ce10;
        case 0x21ce14u: goto label_21ce14;
        case 0x21ce18u: goto label_21ce18;
        case 0x21ce1cu: goto label_21ce1c;
        case 0x21ce20u: goto label_21ce20;
        case 0x21ce24u: goto label_21ce24;
        case 0x21ce28u: goto label_21ce28;
        case 0x21ce2cu: goto label_21ce2c;
        case 0x21ce30u: goto label_21ce30;
        case 0x21ce34u: goto label_21ce34;
        case 0x21ce38u: goto label_21ce38;
        case 0x21ce3cu: goto label_21ce3c;
        case 0x21ce40u: goto label_21ce40;
        case 0x21ce44u: goto label_21ce44;
        default: break;
    }

    ctx->pc = 0x21cd90u;

label_21cd90:
    // 0x21cd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21cd94:
    // 0x21cd94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21cd98:
    // 0x21cd98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21cd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21cd9c:
    // 0x21cd9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21cd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21cda0:
    // 0x21cda0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_21cda4:
    // 0x21cda4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_21cda8:
    // 0x21cda8: 0x8e221fc8  lw          $v0, 0x1FC8($s1)
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8136)));
label_21cdac:
    // 0x21cdac: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x21cdacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21cdb0:
    // 0x21cdb0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x21cdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_21cdb4:
    // 0x21cdb4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x21cdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21cdb8:
    // 0x21cdb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_21cdbc:
    // 0x21cdbc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x21cdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21cdc0:
    // 0x21cdc0: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x21cdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_21cdc4:
    // 0x21cdc4: 0x26101320  addiu       $s0, $s0, 0x1320
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4896));
label_21cdc8:
    // 0x21cdc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21cdcc:
    // 0x21cdcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21cdd0:
    // 0x21cdd0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21cdd4:
    // 0x21cdd4: 0x40f809  jalr        $v0
label_21cdd8:
    if (ctx->pc == 0x21CDD8u) {
        ctx->pc = 0x21CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDD4u;
        // 0x21cdd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CDDCu;
        goto label_21cddc;
    }
    ctx->pc = 0x21CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CDDCu);
        ctx->pc = 0x21CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDD4u;
        // 0x21cdd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CDD4u, 0x21CDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CDDCu;
label_21cddc:
    // 0x21cddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21cde0:
    // 0x21cde0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x21cde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_21cde4:
    // 0x21cde4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21cde4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21cde8:
    // 0x21cde8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x21cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_21cdec:
    // 0x21cdec: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x21cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_21cdf0:
    // 0x21cdf0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x21cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21cdf4:
    // 0x21cdf4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_21cdf8:
    if (ctx->pc == 0x21CDF8u) {
        ctx->pc = 0x21CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDF4u;
        // 0x21cdf8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CDFCu;
        goto label_21cdfc;
    }
    ctx->pc = 0x21CDF4u;
    {
        const bool branch_taken_0x21cdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cdf4) {
            ctx->pc = 0x21CDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CDF4u;
            // 0x21cdf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CDFCu;
            goto label_21cdfc;
        }
    }
    ctx->pc = 0x21CDFCu;
label_21cdfc:
    // 0x21cdfc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21ce00:
    // 0x21ce00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21ce04:
    // 0x21ce04: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21ce04u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21ce08:
    // 0x21ce08: 0x1012  mflo        $v0
    ctx->pc = 0x21ce08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_21ce0c:
    // 0x21ce0c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x21ce0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21ce10:
    // 0x21ce10: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21ce14:
    if (ctx->pc == 0x21CE14u) {
        ctx->pc = 0x21CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE10u;
        // 0x21ce14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE18u;
        goto label_21ce18;
    }
    ctx->pc = 0x21CE10u;
    {
        const bool branch_taken_0x21ce10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ce10) {
            ctx->pc = 0x21CE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CE10u;
            // 0x21ce14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CE30u;
            goto label_21ce30;
        }
    }
    ctx->pc = 0x21CE18u;
label_21ce18:
    // 0x21ce18: 0xc087ed0  jal         func_21FB40
label_21ce1c:
    if (ctx->pc == 0x21CE1Cu) {
        ctx->pc = 0x21CE20u;
        goto label_21ce20;
    }
    ctx->pc = 0x21CE18u;
    SET_GPR_U32(ctx, 31, 0x21CE20u);
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CE18u, 0x21CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE20u;
label_21ce20:
    // 0x21ce20: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x21ce20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21ce24:
    // 0x21ce24: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_21ce28:
    if (ctx->pc == 0x21CE28u) {
        ctx->pc = 0x21CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE24u;
        // 0x21ce28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE2Cu;
        goto label_21ce2c;
    }
    ctx->pc = 0x21CE24u;
    {
        const bool branch_taken_0x21ce24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE24u;
        // 0x21ce28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce24) {
            ctx->pc = 0x21CE30u;
            goto label_21ce30;
        }
    }
    ctx->pc = 0x21CE2Cu;
label_21ce2c:
    // 0x21ce2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ce30:
    // 0x21ce30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ce30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ce34:
    // 0x21ce34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ce34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21ce38:
    // 0x21ce38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ce38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21ce3c:
    // 0x21ce3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21ce3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21ce40:
    // 0x21ce40: 0x3e00008  jr          $ra
label_21ce44:
    if (ctx->pc == 0x21CE44u) {
        ctx->pc = 0x21CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE40u;
        // 0x21ce44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE48u;
        goto label_fallthrough_0x21ce40;
    }
    ctx->pc = 0x21CE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE40u;
        // 0x21ce44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21ce40:
    ctx->pc = 0x21CE48u;
}
