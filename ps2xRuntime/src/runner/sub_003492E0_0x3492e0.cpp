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

// Function: sub_003492E0
// Address: 0x3492e0 - 0x3493a0
void sub_003492E0_0x3492e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003492E0_0x3492e0");
#endif

    ctx->pc = 0x3492e0u;

    // 0x3492e0: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x3492e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3492e4: 0x28c20064  slti        $v0, $a2, 0x64
    ctx->pc = 0x3492e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3492e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3492E8u;
    {
        const bool branch_taken_0x3492e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3492ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492E8u;
        // 0x3492ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492e8) {
            ctx->pc = 0x3492F8u;
            goto label_3492f8;
        }
    }
    ctx->pc = 0x3492F0u;
    // 0x3492f0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3492F0u;
    {
        const bool branch_taken_0x3492f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3492f0) {
            ctx->pc = 0x349398u;
            goto label_349398;
        }
    }
    ctx->pc = 0x3492F8u;
label_3492f8:
    // 0x3492f8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3492f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3492fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3492fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x349300: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x349300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x349304: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x349304u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x349308: 0x24630d04  addiu       $v1, $v1, 0xD04
    ctx->pc = 0x349308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3332));
    // 0x34930c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x349310: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x349310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x349314: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x349314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349318: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x349318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34931c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34931Cu;
    {
        const bool branch_taken_0x34931c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x349320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34931Cu;
        // 0x349320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34931c) {
            ctx->pc = 0x349330u;
            goto label_349330;
        }
    }
    ctx->pc = 0x349324u;
    // 0x349324: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x349324u;
    {
        const bool branch_taken_0x349324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349324) {
            ctx->pc = 0x349398u;
            goto label_349398;
        }
    }
    ctx->pc = 0x34932Cu;
    // 0x34932c: 0x0  nop
    ctx->pc = 0x34932cu;
    // NOP
label_349330:
    // 0x349330: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x349330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x349334: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x349334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349338: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x349338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x34933c: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x34933cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x349340: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x349340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x349344: 0x90880004  lbu         $t0, 0x4($a0)
    ctx->pc = 0x349344u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x349348: 0x24c60d09  addiu       $a2, $a2, 0xD09
    ctx->pc = 0x349348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3337));
    // 0x34934c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x34934cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x349350: 0x24a50d0a  addiu       $a1, $a1, 0xD0A
    ctx->pc = 0x349350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3338));
    // 0x349354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349358: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x349358u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x34935c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x34935cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x349360: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x349360u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x349364: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x349364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x349368: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x349368u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34936c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x34936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x349370: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x349370u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x349374: 0x90870004  lbu         $a3, 0x4($a0)
    ctx->pc = 0x349374u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x349378: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x349378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34937c: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x34937cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x349380: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x349380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x349384: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x349384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x349388: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x349388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34938c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x34938cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x349390: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x349390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x349394: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x349394u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
label_349398:
    // 0x349398: 0x3e00008  jr          $ra
    ctx->pc = 0x349398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3493A0u;
}
