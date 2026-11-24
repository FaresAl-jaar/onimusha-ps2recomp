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

// Function: sub_00381870
// Address: 0x381870 - 0x381950
void sub_00381870_0x381870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381870_0x381870");
#endif

    switch (ctx->pc) {
        case 0x381884u: goto label_381884;
        case 0x3818f0u: goto label_3818f0;
        default: break;
    }

    ctx->pc = 0x381870u;

    // 0x381870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x381878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38187c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x38187Cu;
    SET_GPR_U32(ctx, 31, 0x381884u);
    ctx->pc = 0x381880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38187Cu;
    // 0x381880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x38187Cu, 0x381884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381884u;
label_381884:
    // 0x381884: 0x8e0406c8  lw          $a0, 0x6C8($s0)
    ctx->pc = 0x381884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x381888: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x381888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x38188c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x381890: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x381890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x381894: 0xae0406c8  sw          $a0, 0x6C8($s0)
    ctx->pc = 0x381894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 4));
    // 0x381898: 0x8e0406cc  lw          $a0, 0x6CC($s0)
    ctx->pc = 0x381898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x38189c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x38189cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3818a0: 0xae0406cc  sw          $a0, 0x6CC($s0)
    ctx->pc = 0x3818a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 4));
    // 0x3818a4: 0xa2030114  sb          $v1, 0x114($s0)
    ctx->pc = 0x3818a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 276), (uint8_t)GPR_U32(ctx, 3));
    // 0x3818a8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3818a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3818ac: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3818ACu;
    {
        const bool branch_taken_0x3818ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3818B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818ACu;
        // 0x3818b0: 0x3c04457a  lui         $a0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818ac) {
            ctx->pc = 0x3818D0u;
            goto label_3818d0;
        }
    }
    ctx->pc = 0x3818B4u;
    // 0x3818b4: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3818b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3818b8: 0xaca40084  sw          $a0, 0x84($a1)
    ctx->pc = 0x3818b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 4));
    // 0x3818bc: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3818bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3818c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3818c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3818c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3818c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3818c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3818c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3818cc: 0x0  nop
    ctx->pc = 0x3818ccu;
    // NOP
label_3818d0:
    // 0x3818d0: 0xa2002b21  sb          $zero, 0x2B21($s0)
    ctx->pc = 0x3818d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 0));
    // 0x3818d4: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3818d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3818d8: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x3818d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3818dc: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3818dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3818e0: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3818E0u;
    {
        const bool branch_taken_0x3818e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3818E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818E0u;
        // 0x3818e4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818e0) {
            ctx->pc = 0x381920u;
            goto label_381920;
        }
    }
    ctx->pc = 0x3818E8u;
    // 0x3818e8: 0x24050460  addiu       $a1, $zero, 0x460
    ctx->pc = 0x3818e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
    // 0x3818ec: 0x0  nop
    ctx->pc = 0x3818ecu;
    // NOP
label_3818f0:
    // 0x3818f0: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x3818f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3818f4: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x3818f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x3818f8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3818f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3818fc: 0x948300c6  lhu         $v1, 0xC6($a0)
    ctx->pc = 0x3818fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x381900: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x381900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x381904: 0xa48300c6  sh          $v1, 0xC6($a0)
    ctx->pc = 0x381904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x381908: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x381908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38190c: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x38190cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x381910: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x381910u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x381914: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x381914u;
    {
        const bool branch_taken_0x381914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x381918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381914u;
        // 0x381918: 0x24a50460  addiu       $a1, $a1, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381914) {
            ctx->pc = 0x3818F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3818f0;
        }
    }
    ctx->pc = 0x38191Cu;
    // 0x38191c: 0x0  nop
    ctx->pc = 0x38191cu;
    // NOP
label_381920:
    // 0x381920: 0xa6002b28  sh          $zero, 0x2B28($s0)
    ctx->pc = 0x381920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 0));
    // 0x381924: 0xa6002b2a  sh          $zero, 0x2B2A($s0)
    ctx->pc = 0x381924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11050), (uint16_t)GPR_U32(ctx, 0));
    // 0x381928: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x381928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x38192c: 0xa2002b2c  sb          $zero, 0x2B2C($s0)
    ctx->pc = 0x38192cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11052), (uint8_t)GPR_U32(ctx, 0));
    // 0x381930: 0x96040030  lhu         $a0, 0x30($s0)
    ctx->pc = 0x381930u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x381934: 0x3084ffbf  andi        $a0, $a0, 0xFFBF
    ctx->pc = 0x381934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65471);
    // 0x381938: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x381938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x38193c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38193cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x381940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381948: 0x3e00008  jr          $ra
    ctx->pc = 0x381948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381948u;
        // 0x38194c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381950u;
}
