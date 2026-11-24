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

// Function: sub_0038F280
// Address: 0x38f280 - 0x38f35c
void sub_0038F280_0x38f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F280_0x38f280");
#endif

    switch (ctx->pc) {
        case 0x38f2ecu: goto label_38f2ec;
        case 0x38f310u: goto label_38f310;
        case 0x38f324u: goto label_38f324;
        default: break;
    }

    ctx->pc = 0x38f280u;

    // 0x38f280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38f284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38f28c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38f28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38f290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f298: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x38f298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x38f29c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x38F29Cu;
    {
        const bool branch_taken_0x38f29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38f29c) {
            ctx->pc = 0x38F2E0u;
            goto label_38f2e0;
        }
    }
    ctx->pc = 0x38F2A4u;
    // 0x38f2a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F2A4u;
    {
        const bool branch_taken_0x38f2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f2a4) {
            ctx->pc = 0x38F2B8u;
            goto label_38f2b8;
        }
    }
    ctx->pc = 0x38F2ACu;
    // 0x38f2ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x38F2ACu;
    {
        const bool branch_taken_0x38f2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f2ac) {
            ctx->pc = 0x38F348u;
            goto label_38f348;
        }
    }
    ctx->pc = 0x38F2B4u;
    // 0x38f2b4: 0x0  nop
    ctx->pc = 0x38f2b4u;
    // NOP
label_38f2b8:
    // 0x38f2b8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38f2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f2bc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38f2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f2c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38f2c4: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x38f2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38f2c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38f2cc: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x38f2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38f2d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38f2d4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x38f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38f2d8: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x38f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x38f2dc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x38f2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_38f2e0:
    // 0x38f2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2e4: 0xc0e374c  jal         func_38DD30
    ctx->pc = 0x38F2E4u;
    SET_GPR_U32(ctx, 31, 0x38F2ECu);
    ctx->pc = 0x38F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F2E4u;
    // 0x38f2e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DD30u, 0x38F2E4u, 0x38F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F2ECu;
label_38f2ec:
    // 0x38f2ec: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x38f2ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38f2f0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x38f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x38f2f4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x38f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x38f2f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x38f2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x38f2fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38f2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x38f300: 0x26052b20  addiu       $a1, $s0, 0x2B20
    ctx->pc = 0x38f300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    // 0x38f304: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38f304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38f308: 0xc097448  jal         func_25D120
    ctx->pc = 0x38F308u;
    SET_GPR_U32(ctx, 31, 0x38F310u);
    ctx->pc = 0x38F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F308u;
    // 0x38f30c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D120u, 0x38F308u, 0x38F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F310u;
label_38f310:
    // 0x38f310: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x38f310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38f314: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x38f314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x38f318: 0x86052b30  lh          $a1, 0x2B30($s0)
    ctx->pc = 0x38f318u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x38f31c: 0xc097498  jal         func_25D260
    ctx->pc = 0x38F31Cu;
    SET_GPR_U32(ctx, 31, 0x38F324u);
    ctx->pc = 0x38F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F31Cu;
    // 0x38f320: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x38F31Cu, 0x38F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F324u;
label_38f324:
    // 0x38f324: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38f324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f328: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38F328u;
    {
        const bool branch_taken_0x38f328 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x38F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F328u;
        // 0x38f32c: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f328) {
            ctx->pc = 0x38F348u;
            goto label_38f348;
        }
    }
    ctx->pc = 0x38F330u;
    // 0x38f330: 0x86042b30  lh          $a0, 0x2B30($s0)
    ctx->pc = 0x38f330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x38f334: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x38f334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38f338: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F338u;
    {
        const bool branch_taken_0x38f338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x38F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F338u;
        // 0x38f33c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f338) {
            ctx->pc = 0x38F348u;
            goto label_38f348;
        }
    }
    ctx->pc = 0x38F340u;
    // 0x38f340: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38f340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f344: 0x0  nop
    ctx->pc = 0x38f344u;
    // NOP
label_38f348:
    // 0x38f348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38f34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f354: 0x3e00008  jr          $ra
    ctx->pc = 0x38F354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F354u;
        // 0x38f358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F35Cu;
}
