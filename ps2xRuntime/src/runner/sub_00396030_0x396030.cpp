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

// Function: sub_00396030
// Address: 0x396030 - 0x396118
void sub_00396030_0x396030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396030_0x396030");
#endif

    switch (ctx->pc) {
        case 0x396044u: goto label_396044;
        case 0x396090u: goto label_396090;
        case 0x396104u: goto label_396104;
        default: break;
    }

    ctx->pc = 0x396030u;

    // 0x396030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39603c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x39603Cu;
    SET_GPR_U32(ctx, 31, 0x396044u);
    ctx->pc = 0x396040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39603Cu;
    // 0x396040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x39603Cu, 0x396044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396044u;
label_396044:
    // 0x396044: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x396044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x396048: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x396048u;
    {
        const bool branch_taken_0x396048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396048u;
        // 0x39604c: 0x3c0344fa  lui         $v1, 0x44FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396048) {
            ctx->pc = 0x396068u;
            goto label_396068;
        }
    }
    ctx->pc = 0x396050u;
    // 0x396050: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x396050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x396054: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x396054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x396058: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x396058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39605c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x396060: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x396060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x396064: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x396064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_396068:
    // 0x396068: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x396068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x39606c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x39606cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x396070: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x396070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x396074: 0xae0306c0  sw          $v1, 0x6C0($s0)
    ctx->pc = 0x396074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 3));
    // 0x396078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39607c: 0xa6022b24  sh          $v0, 0x2B24($s0)
    ctx->pc = 0x39607cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 2));
    // 0x396080: 0xae002b20  sw          $zero, 0x2B20($s0)
    ctx->pc = 0x396080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 0));
    // 0x396084: 0x920207d8  lbu         $v0, 0x7D8($s0)
    ctx->pc = 0x396084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x396088: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x396088u;
    SET_GPR_U32(ctx, 31, 0x396090u);
    ctx->pc = 0x39608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396088u;
    // 0x39608c: 0xa2022b36  sb          $v0, 0x2B36($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11062), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x396088u, 0x396090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396090u;
label_396090:
    // 0x396090: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x396090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x396094: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x396094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x396098: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x396098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39609c: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x39609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x3960a0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x3960a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3960a4: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x3960a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x3960a8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x3960a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3960ac: 0x0  nop
    ctx->pc = 0x3960acu;
    // NOP
    // 0x3960b0: 0x0  nop
    ctx->pc = 0x3960b0u;
    // NOP
    // 0x3960b4: 0x1810  mfhi        $v1
    ctx->pc = 0x3960b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3960b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3960b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3960bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3960bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3960c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3960c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3960c4: 0xa6032b32  sh          $v1, 0x2B32($s0)
    ctx->pc = 0x3960c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 3));
    // 0x3960c8: 0xa6002b34  sh          $zero, 0x2B34($s0)
    ctx->pc = 0x3960c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11060), (uint16_t)GPR_U32(ctx, 0));
    // 0x3960cc: 0xa2002b38  sb          $zero, 0x2B38($s0)
    ctx->pc = 0x3960ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11064), (uint8_t)GPR_U32(ctx, 0));
    // 0x3960d0: 0xa6002b3a  sh          $zero, 0x2B3A($s0)
    ctx->pc = 0x3960d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11066), (uint16_t)GPR_U32(ctx, 0));
    // 0x3960d4: 0xa2002b37  sb          $zero, 0x2B37($s0)
    ctx->pc = 0x3960d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11063), (uint8_t)GPR_U32(ctx, 0));
    // 0x3960d8: 0xa6062b30  sh          $a2, 0x2B30($s0)
    ctx->pc = 0x3960d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 6));
    // 0x3960dc: 0xa6052b26  sh          $a1, 0x2B26($s0)
    ctx->pc = 0x3960dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11046), (uint16_t)GPR_U32(ctx, 5));
    // 0x3960e0: 0xa6052b28  sh          $a1, 0x2B28($s0)
    ctx->pc = 0x3960e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 5));
    // 0x3960e4: 0xa6052b2a  sh          $a1, 0x2B2A($s0)
    ctx->pc = 0x3960e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11050), (uint16_t)GPR_U32(ctx, 5));
    // 0x3960e8: 0xa6052b2c  sh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3960e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11052), (uint16_t)GPR_U32(ctx, 5));
    // 0x3960ec: 0xa6052b2e  sh          $a1, 0x2B2E($s0)
    ctx->pc = 0x3960ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 5));
    // 0x3960f0: 0x92032b36  lbu         $v1, 0x2B36($s0)
    ctx->pc = 0x3960f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11062)));
    // 0x3960f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3960F4u;
    {
        const bool branch_taken_0x3960f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3960F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960F4u;
        // 0x3960f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3960f4) {
            ctx->pc = 0x396108u;
            goto label_396108;
        }
    }
    ctx->pc = 0x3960FCu;
    // 0x3960fc: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3960FCu;
    SET_GPR_U32(ctx, 31, 0x396104u);
    ctx->pc = 0x396100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3960FCu;
    // 0x396100: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3960FCu, 0x396104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396104u;
label_396104:
    // 0x396104: 0x0  nop
    ctx->pc = 0x396104u;
    // NOP
label_396108:
    // 0x396108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39610c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39610cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396110: 0x3e00008  jr          $ra
    ctx->pc = 0x396110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396110u;
        // 0x396114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396118u;
}
