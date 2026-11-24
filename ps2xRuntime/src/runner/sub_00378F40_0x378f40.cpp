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

// Function: sub_00378F40
// Address: 0x378f40 - 0x379080
void sub_00378F40_0x378f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378F40_0x378f40");
#endif

    switch (ctx->pc) {
        case 0x379008u: goto label_379008;
        default: break;
    }

    ctx->pc = 0x378f40u;

    // 0x378f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x378f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378f4c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x378f4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x378f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x378f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378f58: 0x10a4002b  beq         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x378F58u;
    {
        const bool branch_taken_0x378f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x378F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378F58u;
        // 0x378f5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f58) {
            ctx->pc = 0x379008u;
            goto label_379008;
        }
    }
    ctx->pc = 0x378F60u;
    // 0x378f60: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x378F60u;
    {
        const bool branch_taken_0x378f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x378f60) {
            ctx->pc = 0x378FF8u;
            goto label_378ff8;
        }
    }
    ctx->pc = 0x378F68u;
    // 0x378f68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x378f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378f6c: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x378F6Cu;
    {
        const bool branch_taken_0x378f6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x378f6c) {
            ctx->pc = 0x378FB0u;
            goto label_378fb0;
        }
    }
    ctx->pc = 0x378F74u;
    // 0x378f74: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x378F74u;
    {
        const bool branch_taken_0x378f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x378f74) {
            ctx->pc = 0x378F88u;
            goto label_378f88;
        }
    }
    ctx->pc = 0x378F7Cu;
    // 0x378f7c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x378F7Cu;
    {
        const bool branch_taken_0x378f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378f7c) {
            ctx->pc = 0x379070u;
            goto label_379070;
        }
    }
    ctx->pc = 0x378F84u;
    // 0x378f84: 0x0  nop
    ctx->pc = 0x378f84u;
    // NOP
label_378f88:
    // 0x378f88: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x378f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x378f8c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x378f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x378f90: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x378f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x378f94: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x378f94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x378f98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x378f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x378f9c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x378f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x378fa0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378fa4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x378fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x378fa8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x378fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x378fac: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x378facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_378fb0:
    // 0x378fb0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x378fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x378fb4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x378FB4u;
    {
        const bool branch_taken_0x378fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378fb4) {
            ctx->pc = 0x379070u;
            goto label_379070;
        }
    }
    ctx->pc = 0x378FBCu;
    // 0x378fbc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x378fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x378fc0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x378fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x378fc4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x378fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x378fc8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x378fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x378fcc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x378fccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x378fd0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378fd4: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x378fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x378fd8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x378fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x378fdc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x378fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x378fe0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x378fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x378fe4: 0x34643e00  ori         $a0, $v1, 0x3E00
    ctx->pc = 0x378fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x378fe8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x378fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378fec: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x378fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x378ff0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x378FF0u;
    {
        const bool branch_taken_0x378ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FF0u;
        // 0x378ff4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ff0) {
            ctx->pc = 0x379070u;
            goto label_379070;
        }
    }
    ctx->pc = 0x378FF8u;
label_378ff8:
    // 0x378ff8: 0xa2032b8c  sb          $v1, 0x2B8C($s0)
    ctx->pc = 0x378ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11148), (uint8_t)GPR_U32(ctx, 3));
    // 0x378ffc: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x378ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x379000: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x379000u;
    SET_GPR_U32(ctx, 31, 0x379008u);
    ctx->pc = 0x379004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379000u;
    // 0x379004: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x379000u, 0x379008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379008u;
label_379008:
    // 0x379008: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x379008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x37900c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37900Cu;
    {
        const bool branch_taken_0x37900c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37900c) {
            ctx->pc = 0x379070u;
            goto label_379070;
        }
    }
    ctx->pc = 0x379014u;
    // 0x379014: 0x82032b8c  lb          $v1, 0x2B8C($s0)
    ctx->pc = 0x379014u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11148)));
    // 0x379018: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x379018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37901c: 0xa2032b8c  sb          $v1, 0x2B8C($s0)
    ctx->pc = 0x37901cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11148), (uint8_t)GPR_U32(ctx, 3));
    // 0x379020: 0x82032b8c  lb          $v1, 0x2B8C($s0)
    ctx->pc = 0x379020u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11148)));
    // 0x379024: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x379024u;
    {
        const bool branch_taken_0x379024 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x379028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379024u;
        // 0x379028: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379024) {
            ctx->pc = 0x379038u;
            goto label_379038;
        }
    }
    ctx->pc = 0x37902Cu;
    // 0x37902c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37902Cu;
    {
        const bool branch_taken_0x37902c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37902Cu;
        // 0x379030: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37902c) {
            ctx->pc = 0x379060u;
            goto label_379060;
        }
    }
    ctx->pc = 0x379034u;
    // 0x379034: 0x0  nop
    ctx->pc = 0x379034u;
    // NOP
label_379038:
    // 0x379038: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x379038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x37903c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x37903cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379040: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x379040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x379044: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x379044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379048: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37904c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x37904cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379050: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379054: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x379054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379058: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x379058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x37905c: 0x0  nop
    ctx->pc = 0x37905cu;
    // NOP
label_379060:
    // 0x379060: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x379060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x379064: 0x34633e00  ori         $v1, $v1, 0x3E00
    ctx->pc = 0x379064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x379068: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x379068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x37906c: 0x0  nop
    ctx->pc = 0x37906cu;
    // NOP
label_379070:
    // 0x379070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379078: 0x3e00008  jr          $ra
    ctx->pc = 0x379078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379078u;
        // 0x37907c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379080u;
}
