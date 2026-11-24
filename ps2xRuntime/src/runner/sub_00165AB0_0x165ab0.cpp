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

// Function: sub_00165AB0
// Address: 0x165ab0 - 0x165b6c
void sub_00165AB0_0x165ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165AB0_0x165ab0");
#endif

    switch (ctx->pc) {
        case 0x165af0u: goto label_165af0;
        default: break;
    }

    ctx->pc = 0x165ab0u;

    // 0x165ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165ab4: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x165ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x165ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ac8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165acc: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x165accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x165ad0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x165ad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x165ad4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165ad8: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x165ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x165adc: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x165adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x165ae0: 0xa0820012  sb          $v0, 0x12($a0)
    ctx->pc = 0x165ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x165ae4: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x165ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x165ae8: 0xc0596dc  jal         func_165B70
    ctx->pc = 0x165AE8u;
    SET_GPR_U32(ctx, 31, 0x165AF0u);
    ctx->pc = 0x165AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AE8u;
    // 0x165aec: 0xa0820013  sb          $v0, 0x13($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B70u, 0x165AE8u, 0x165AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AF0u;
label_165af0:
    // 0x165af0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x165af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x165af4: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x165af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x165af8: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x165afc: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x165afcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x165b00: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x165b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x165b04: 0xa223004e  sb          $v1, 0x4E($s1)
    ctx->pc = 0x165b04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x165b08: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x165b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x165b0c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x165b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x165b10: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x165b10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x165b14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165b18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x165b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x165b1c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x165b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x165b20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x165b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165b24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165b28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x165b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x165b2c: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x165b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x165b30: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x165b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x165b34: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x165b34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x165b38: 0xa223002f  sb          $v1, 0x2F($s1)
    ctx->pc = 0x165b38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x165b3c: 0x922300a2  lbu         $v1, 0xA2($s1)
    ctx->pc = 0x165b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x165b40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x165B40u;
    {
        const bool branch_taken_0x165b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B40u;
        // 0x165b44: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b40) {
            ctx->pc = 0x165B58u;
            goto label_165b58;
        }
    }
    ctx->pc = 0x165B48u;
    // 0x165b48: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x165b4c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x165b4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165b50: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x165b50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x165b54: 0x0  nop
    ctx->pc = 0x165b54u;
    // NOP
label_165b58:
    // 0x165b58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165b64: 0x3e00008  jr          $ra
    ctx->pc = 0x165B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B64u;
        // 0x165b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165B6Cu;
}
