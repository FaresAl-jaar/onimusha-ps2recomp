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

// Function: sub_0030DD20
// Address: 0x30dd20 - 0x30df34
void sub_0030DD20_0x30dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DD20_0x30dd20");
#endif

    switch (ctx->pc) {
        case 0x30dd70u: goto label_30dd70;
        case 0x30ddc0u: goto label_30ddc0;
        case 0x30de40u: goto label_30de40;
        default: break;
    }

    ctx->pc = 0x30dd20u;

    // 0x30dd20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30dd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30dd24: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x30dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x30dd28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30dd2c: 0x3c07008e  lui         $a3, 0x8E
    ctx->pc = 0x30dd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)142 << 16));
    // 0x30dd30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30dd34: 0x24639210  addiu       $v1, $v1, -0x6DF0
    ctx->pc = 0x30dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939152));
    // 0x30dd38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30dd3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30dd3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30dd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30dd44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30dd48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30dd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30dd4c: 0x24e7fd88  addiu       $a3, $a3, -0x278
    ctx->pc = 0x30dd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966664));
    // 0x30dd50: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30dd50u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E9210u));
    // 0x30dd54: 0x10e00070  beqz        $a3, . + 4 + (0x70 << 2)
    ctx->pc = 0x30DD54u;
    {
        const bool branch_taken_0x30dd54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD54u;
        // 0x30dd58: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd54) {
            ctx->pc = 0x30DF18u;
            goto label_30df18;
        }
    }
    ctx->pc = 0x30DD5Cu;
    // 0x30dd5c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x30dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30dd60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30dd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30DD64u;
    {
        const bool branch_taken_0x30dd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD64u;
        // 0x30dd68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd64) {
            ctx->pc = 0x30DDA8u;
            goto label_30dda8;
        }
    }
    ctx->pc = 0x30DD6Cu;
    // 0x30dd6c: 0x0  nop
    ctx->pc = 0x30dd6cu;
    // NOP
label_30dd70:
    // 0x30dd70: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x30dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30dd74: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x30dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30dd78: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x30dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30dd7c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x30dd7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x30dd80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30dd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30dd84: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DD84u;
    {
        const bool branch_taken_0x30dd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dd84) {
            ctx->pc = 0x30DDA0u;
            goto label_30dda0;
        }
    }
    ctx->pc = 0x30DD8Cu;
    // 0x30dd8c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x30dd8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30dd90: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30dd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30dd94: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30dd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30dd98: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x30dd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x30dd9c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x30dd9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_30dda0:
    // 0x30dda0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30dda4: 0x0  nop
    ctx->pc = 0x30dda4u;
    // NOP
label_30dda8:
    // 0x30dda8: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x30dda8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30ddac: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30DDACu;
    {
        const bool branch_taken_0x30ddac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDACu;
        // 0x30ddb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddac) {
            ctx->pc = 0x30DD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dd70;
        }
    }
    ctx->pc = 0x30DDB4u;
    // 0x30ddb4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x30DDB4u;
    {
        const bool branch_taken_0x30ddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ddb4) {
            ctx->pc = 0x30DF08u;
            goto label_30df08;
        }
    }
    ctx->pc = 0x30DDBCu;
    // 0x30ddbc: 0x0  nop
    ctx->pc = 0x30ddbcu;
    // NOP
label_30ddc0:
    // 0x30ddc0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x30ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30ddc4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30ddc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30ddcc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x30ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x30ddd0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ddd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ddd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ddd8: 0x0  nop
    ctx->pc = 0x30ddd8u;
    // NOP
    // 0x30dddc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30dddcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30dde0: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x30DDE0u;
    {
        const bool branch_taken_0x30dde0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30dde0) {
            ctx->pc = 0x30DF00u;
            goto label_30df00;
        }
    }
    ctx->pc = 0x30DDE8u;
    // 0x30dde8: 0x8e630600  lw          $v1, 0x600($s3)
    ctx->pc = 0x30dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1536)));
    // 0x30ddec: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x30ddf0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30ddf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ddf4: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30ddf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30ddf8: 0x14e00041  bnez        $a3, . + 4 + (0x41 << 2)
    ctx->pc = 0x30DDF8u;
    {
        const bool branch_taken_0x30ddf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ddf8) {
            ctx->pc = 0x30DF00u;
            goto label_30df00;
        }
    }
    ctx->pc = 0x30DE00u;
    // 0x30de00: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30de00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30de04: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x30de04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x30de08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30de0c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x30DE0Cu;
    {
        const bool branch_taken_0x30de0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30de0c) {
            ctx->pc = 0x30DF00u;
            goto label_30df00;
        }
    }
    ctx->pc = 0x30DE14u;
    // 0x30de14: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x30de14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x30de18: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x30DE18u;
    {
        const bool branch_taken_0x30de18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30de18) {
            ctx->pc = 0x30DF00u;
            goto label_30df00;
        }
    }
    ctx->pc = 0x30DE20u;
    // 0x30de20: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x30de20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x30de24: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x30DE24u;
    {
        const bool branch_taken_0x30de24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30de24) {
            ctx->pc = 0x30DF00u;
            goto label_30df00;
        }
    }
    ctx->pc = 0x30DE2Cu;
    // 0x30de2c: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30de2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30de30: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30de30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30de34: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30de38: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30DE38u;
    SET_GPR_U32(ctx, 31, 0x30DE40u);
    ctx->pc = 0x30DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DE38u;
    // 0x30de3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30DE38u, 0x30DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DE40u;
label_30de40:
    // 0x30de40: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x30DE40u;
    {
        const bool branch_taken_0x30de40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE40u;
        // 0x30de44: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de40) {
            ctx->pc = 0x30DF00u;
            goto label_30df00;
        }
    }
    ctx->pc = 0x30DE48u;
    // 0x30de48: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30de48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30de4c: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x30de4cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30de50: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30de50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30de54: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x30de54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30de58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30de58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30de5c: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x30de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x30de60: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x30de60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30de64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30de68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30de6c: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x30de6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x30de70: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30de70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30de74: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x30de74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x30de78: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x30de78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x30de7c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30DE7Cu;
    {
        const bool branch_taken_0x30de7c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x30DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE7Cu;
        // 0x30de80: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de7c) {
            ctx->pc = 0x30DE90u;
            goto label_30de90;
        }
    }
    ctx->pc = 0x30DE84u;
    // 0x30de84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30de84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30de88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30DE88u;
    {
        const bool branch_taken_0x30de88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE88u;
        // 0x30de8c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de88) {
            ctx->pc = 0x30DEA8u;
            goto label_30dea8;
        }
    }
    ctx->pc = 0x30DE90u;
label_30de90:
    // 0x30de90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30de90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30de94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30de94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30de98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30de98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30de9c: 0x0  nop
    ctx->pc = 0x30de9cu;
    // NOP
    // 0x30dea0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x30dea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30dea4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30dea4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30dea8:
    // 0x30dea8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x30dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30deac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x30deacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30deb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30deb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30deb4: 0x0  nop
    ctx->pc = 0x30deb4u;
    // NOP
    // 0x30deb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30deb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30debc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30debcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30dec0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30DEC0u;
    {
        const bool branch_taken_0x30dec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30dec0) {
            ctx->pc = 0x30DED8u;
            goto label_30ded8;
        }
    }
    ctx->pc = 0x30DEC8u;
    // 0x30dec8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30dec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30decc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30deccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30ded0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30DED0u;
    {
        const bool branch_taken_0x30ded0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DED0u;
        // 0x30ded4: 0xa0440034  sb          $a0, 0x34($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ded0) {
            ctx->pc = 0x30DEF4u;
            goto label_30def4;
        }
    }
    ctx->pc = 0x30DED8u;
label_30ded8:
    // 0x30ded8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30ded8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30dedc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30dee0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30dee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30dee4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30dee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30dee8: 0x0  nop
    ctx->pc = 0x30dee8u;
    // NOP
    // 0x30deec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30deecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30def0: 0xa0440034  sb          $a0, 0x34($v0)
    ctx->pc = 0x30def0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 4));
label_30def4:
    // 0x30def4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30def4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30def8: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x30def8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x30defc: 0x0  nop
    ctx->pc = 0x30defcu;
    // NOP
label_30df00:
    // 0x30df00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30df00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30df04: 0x0  nop
    ctx->pc = 0x30df04u;
    // NOP
label_30df08:
    // 0x30df08: 0x8e630604  lw          $v1, 0x604($s3)
    ctx->pc = 0x30df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1540)));
    // 0x30df0c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x30df0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30df10: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x30DF10u;
    {
        const bool branch_taken_0x30df10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30df10) {
            ctx->pc = 0x30DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ddc0;
        }
    }
    ctx->pc = 0x30DF18u;
label_30df18:
    // 0x30df18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30df1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30df1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30df20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30df20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30df24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30df24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30df28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30df28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x30DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF2Cu;
        // 0x30df30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DF34u;
}
