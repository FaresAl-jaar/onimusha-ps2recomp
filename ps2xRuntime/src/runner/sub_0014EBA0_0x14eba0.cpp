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

// Function: sub_0014EBA0
// Address: 0x14eba0 - 0x14eca0
void sub_0014EBA0_0x14eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EBA0_0x14eba0");
#endif

    ctx->pc = 0x14eba0u;

    // 0x14eba0: 0x90a400e4  lbu         $a0, 0xE4($a1)
    ctx->pc = 0x14eba0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14eba4: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x14eba4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14eba8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x14EBA8u;
    {
        const bool branch_taken_0x14eba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eba8) {
            ctx->pc = 0x14EC98u;
            goto label_14ec98;
        }
    }
    ctx->pc = 0x14EBB0u;
    // 0x14ebb0: 0x8ca900ec  lw          $t1, 0xEC($a1)
    ctx->pc = 0x14ebb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14ebb4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x14ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14ebb8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ebbc: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x14ebbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ebc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ebc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14ebc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ebc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ebcc: 0x12a7021  addu        $t6, $t1, $t2
    ctx->pc = 0x14ebccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x14ebd0: 0xa1c40000  sb          $a0, 0x0($t6)
    ctx->pc = 0x14ebd0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14ebd4: 0xa1c00001  sb          $zero, 0x1($t6)
    ctx->pc = 0x14ebd4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ebd8: 0xadc70004  sw          $a3, 0x4($t6)
    ctx->pc = 0x14ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 7));
    // 0x14ebdc: 0xa5c00002  sh          $zero, 0x2($t6)
    ctx->pc = 0x14ebdcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x14ebe0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x14ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x14ebe4: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14EBE4u;
    {
        const bool branch_taken_0x14ebe4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBE4u;
        // 0x14ebe8: 0xadc300cc  sw          $v1, 0xCC($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebe4) {
            ctx->pc = 0x14EC00u;
            goto label_14ec00;
        }
    }
    ctx->pc = 0x14EBECu;
    // 0x14ebec: 0xadc000c0  sw          $zero, 0xC0($t6)
    ctx->pc = 0x14ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 192), GPR_U32(ctx, 0));
    // 0x14ebf0: 0xadc000c4  sw          $zero, 0xC4($t6)
    ctx->pc = 0x14ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 196), GPR_U32(ctx, 0));
    // 0x14ebf4: 0xadc000c8  sw          $zero, 0xC8($t6)
    ctx->pc = 0x14ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 200), GPR_U32(ctx, 0));
    // 0x14ebf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14EBF8u;
    {
        const bool branch_taken_0x14ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBF8u;
        // 0x14ebfc: 0xe5c000cc  swc1        $f0, 0xCC($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebf8) {
            ctx->pc = 0x14EC10u;
            goto label_14ec10;
        }
    }
    ctx->pc = 0x14EC00u;
label_14ec00:
    // 0x14ec00: 0x25c300c0  addiu       $v1, $t6, 0xC0
    ctx->pc = 0x14ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 192));
    // 0x14ec04: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x14ec04u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ec08: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x14ec08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x14ec0c: 0x0  nop
    ctx->pc = 0x14ec0cu;
    // NOP
label_14ec10:
    // 0x14ec10: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x14ec10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec14: 0x25c300c0  addiu       $v1, $t6, 0xC0
    ctx->pc = 0x14ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 192));
    // 0x14ec18: 0x25cc00e0  addiu       $t4, $t6, 0xE0
    ctx->pc = 0x14ec18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x14ec1c: 0x786d0000  lq          $t5, 0x0($v1)
    ctx->pc = 0x14ec1cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ec20: 0x25cb0060  addiu       $t3, $t6, 0x60
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 96));
    // 0x14ec24: 0x25ca0070  addiu       $t2, $t6, 0x70
    ctx->pc = 0x14ec24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 112));
    // 0x14ec28: 0x25c80060  addiu       $t0, $t6, 0x60
    ctx->pc = 0x14ec28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 96));
    // 0x14ec2c: 0x25c90020  addiu       $t1, $t6, 0x20
    ctx->pc = 0x14ec2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x14ec30: 0x25c400c0  addiu       $a0, $t6, 0xC0
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 192));
    // 0x14ec34: 0x25c70040  addiu       $a3, $t6, 0x40
    ctx->pc = 0x14ec34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x14ec38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14ec38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec3c: 0x7d8d0000  sq          $t5, 0x0($t4)
    ctx->pc = 0x14ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 13));
    // 0x14ec40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14ec40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14ec44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14ec48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14ec50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ec50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec54: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x14ec54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ec58: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x14ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x14ec5c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x14ec5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ec60: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x14ec60u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x14ec64: 0xa5c00018  sh          $zero, 0x18($t6)
    ctx->pc = 0x14ec64u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x14ec68: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x14ec68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ec6c: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x14ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x14ec70: 0xa5c0001a  sh          $zero, 0x1A($t6)
    ctx->pc = 0x14ec70u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x14ec74: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x14ec74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ec78: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x14ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x14ec7c: 0x8ca300e0  lw          $v1, 0xE0($a1)
    ctx->pc = 0x14ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x14ec80: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14ec80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x14ec84: 0xaca300e0  sw          $v1, 0xE0($a1)
    ctx->pc = 0x14ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 3));
    // 0x14ec88: 0xe4a000e8  swc1        $f0, 0xE8($a1)
    ctx->pc = 0x14ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 232), bits); }
    // 0x14ec8c: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14ec8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14ec90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ec94: 0xa0a300e4  sb          $v1, 0xE4($a1)
    ctx->pc = 0x14ec94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 228), (uint8_t)GPR_U32(ctx, 3));
label_14ec98:
    // 0x14ec98: 0x3e00008  jr          $ra
    ctx->pc = 0x14EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ECA0u;
}
