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

// Function: sub_00376BA0
// Address: 0x376ba0 - 0x376cc8
void sub_00376BA0_0x376ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376BA0_0x376ba0");
#endif

    switch (ctx->pc) {
        case 0x376bf8u: goto label_376bf8;
        case 0x376c20u: goto label_376c20;
        case 0x376c4cu: goto label_376c4c;
        default: break;
    }

    ctx->pc = 0x376ba0u;

    // 0x376ba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x376ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x376ba4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x376ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x376ba8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x376ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x376bac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x376bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x376bb0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x376bb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x376bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x376bb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x376bb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x376bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x376bc0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x376bc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x376bc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x376bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376bd0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x376bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bd4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x376bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x376bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bdc: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x376bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x376be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x376be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376be8: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x376be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x376bec: 0x25086b20  addiu       $t0, $t0, 0x6B20
    ctx->pc = 0x376becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27424));
    // 0x376bf0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x376BF0u;
    SET_GPR_U32(ctx, 31, 0x376BF8u);
    ctx->pc = 0x376BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376BF0u;
    // 0x376bf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x376BF0u, 0x376BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BF8u;
label_376bf8:
    // 0x376bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bfc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x376BFCu;
    {
        const bool branch_taken_0x376bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x376C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376BFCu;
        // 0x376c00: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376bfc) {
            ctx->pc = 0x376C98u;
            goto label_376c98;
        }
    }
    ctx->pc = 0x376C04u;
    // 0x376c04: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x376c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c08: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x376c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c0c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x376c0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c14: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x376c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x376c18: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x376C18u;
    SET_GPR_U32(ctx, 31, 0x376C20u);
    ctx->pc = 0x376C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C18u;
    // 0x376c1c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x376C18u, 0x376C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C20u;
label_376c20:
    // 0x376c20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x376c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x376c24: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x376c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x376c28: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x376c28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c30: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x376c30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x376c34: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x376c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x376c38: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x376c38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x376c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376c40: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x376c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x376c44: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x376C44u;
    SET_GPR_U32(ctx, 31, 0x376C4Cu);
    ctx->pc = 0x376C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C44u;
    // 0x376c48: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x376C44u, 0x376C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C4Cu;
label_376c4c:
    // 0x376c4c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x376c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x376c50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x376c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x376c54: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x376c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x376c58: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x376c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x376c5c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x376c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x376c60: 0xa2160559  sb          $s6, 0x559($s0)
    ctx->pc = 0x376c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 22));
    // 0x376c64: 0x87838c0c  lh          $v1, -0x73F4($gp)
    ctx->pc = 0x376c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937612)));
    // 0x376c68: 0xa603055a  sh          $v1, 0x55A($s0)
    ctx->pc = 0x376c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1370), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c6c: 0x87838c0c  lh          $v1, -0x73F4($gp)
    ctx->pc = 0x376c6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937612)));
    // 0x376c70: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x376c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x376c74: 0xa7838c0c  sh          $v1, -0x73F4($gp)
    ctx->pc = 0x376c74u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937612), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c78: 0x87838c0c  lh          $v1, -0x73F4($gp)
    ctx->pc = 0x376c78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937612)));
    // 0x376c7c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x376c7cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x376c80: 0x0  nop
    ctx->pc = 0x376c80u;
    // NOP
    // 0x376c84: 0x0  nop
    ctx->pc = 0x376c84u;
    // NOP
    // 0x376c88: 0x1010  mfhi        $v0
    ctx->pc = 0x376c88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x376c8c: 0xa7828c0c  sh          $v0, -0x73F4($gp)
    ctx->pc = 0x376c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937612), (uint16_t)GPR_U32(ctx, 2));
    // 0x376c90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x376C90u;
    {
        const bool branch_taken_0x376c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C90u;
        // 0x376c94: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c90) {
            ctx->pc = 0x376CA0u;
            goto label_376ca0;
        }
    }
    ctx->pc = 0x376C98u;
label_376c98:
    // 0x376c98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c9c: 0x0  nop
    ctx->pc = 0x376c9cu;
    // NOP
label_376ca0:
    // 0x376ca0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x376ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x376ca4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x376ca4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x376ca8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x376ca8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x376cac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x376cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x376cb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x376cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376cb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x376cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x376CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CC0u;
        // 0x376cc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376CC8u;
}
