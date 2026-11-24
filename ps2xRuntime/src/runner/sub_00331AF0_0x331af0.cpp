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

// Function: sub_00331AF0
// Address: 0x331af0 - 0x331c80
void sub_00331AF0_0x331af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331AF0_0x331af0");
#endif

    switch (ctx->pc) {
        case 0x331b40u: goto label_331b40;
        case 0x331bd0u: goto label_331bd0;
        case 0x331bf8u: goto label_331bf8;
        case 0x331c00u: goto label_331c00;
        case 0x331c54u: goto label_331c54;
        case 0x331c60u: goto label_331c60;
        case 0x331c68u: goto label_331c68;
        default: break;
    }

    ctx->pc = 0x331af0u;

    // 0x331af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x331af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x331af4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x331af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331af8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x331af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x331afc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x331afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x331b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x331b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b0c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x331B0Cu;
    {
        const bool branch_taken_0x331b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x331B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B0Cu;
        // 0x331b10: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b0c) {
            ctx->pc = 0x331B18u;
            goto label_331b18;
        }
    }
    ctx->pc = 0x331B14u;
    // 0x331b14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_331b18:
    // 0x331b18: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x331b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331b1c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x331b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b24: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x331b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x331b28: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x331B28u;
    {
        const bool branch_taken_0x331b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x331B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B28u;
        // 0x331b2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b28) {
            ctx->pc = 0x331BF0u;
            goto label_331bf0;
        }
    }
    ctx->pc = 0x331B30u;
    // 0x331b30: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x331b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x331b34: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x331B34u;
    {
        const bool branch_taken_0x331b34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x331B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B34u;
        // 0x331b38: 0x2449fff8  addiu       $t1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b34) {
            ctx->pc = 0x331BC0u;
            goto label_331bc0;
        }
    }
    ctx->pc = 0x331B3Cu;
    // 0x331b3c: 0x0  nop
    ctx->pc = 0x331b3cu;
    // NOP
label_331b40:
    // 0x331b40: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x331b40u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331b44: 0x94870012  lhu         $a3, 0x12($a0)
    ctx->pc = 0x331b44u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x331b48: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x331b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x331b4c: 0x69302a  slt         $a2, $v1, $t1
    ctx->pc = 0x331b4cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x331b50: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x331b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x331b54: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x331b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x331b58: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x331b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331b5c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x331b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x331b60: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x331b60u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331b64: 0x94870012  lhu         $a3, 0x12($a0)
    ctx->pc = 0x331b64u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x331b68: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x331b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331b6c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x331b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x331b70: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x331b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331b74: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x331b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x331b78: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x331b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x331b7c: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x331b7cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331b80: 0x94870012  lhu         $a3, 0x12($a0)
    ctx->pc = 0x331b80u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x331b84: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x331b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331b88: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x331b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x331b8c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x331b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x331b90: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x331b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331b94: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x331b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x331b98: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x331b98u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331b9c: 0x94870012  lhu         $a3, 0x12($a0)
    ctx->pc = 0x331b9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x331ba0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x331ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331ba4: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x331ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x331ba8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x331ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x331bac: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x331bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x331bb0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x331bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x331bb4: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x331BB4u;
    {
        const bool branch_taken_0x331bb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x331BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331BB4u;
        // 0x331bb8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331bb4) {
            ctx->pc = 0x331B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331b40;
        }
    }
    ctx->pc = 0x331BBCu;
    // 0x331bbc: 0x0  nop
    ctx->pc = 0x331bbcu;
    // NOP
label_331bc0:
    // 0x331bc0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x331bc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x331bc4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x331BC4u;
    {
        const bool branch_taken_0x331bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x331bc4) {
            ctx->pc = 0x331BF0u;
            goto label_331bf0;
        }
    }
    ctx->pc = 0x331BCCu;
    // 0x331bcc: 0x0  nop
    ctx->pc = 0x331bccu;
    // NOP
label_331bd0:
    // 0x331bd0: 0x94870008  lhu         $a3, 0x8($a0)
    ctx->pc = 0x331bd0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331bd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x331bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x331bd8: 0x62302a  slt         $a2, $v1, $v0
    ctx->pc = 0x331bd8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x331bdc: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x331bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x331be0: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x331be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x331be4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x331BE4u;
    {
        const bool branch_taken_0x331be4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x331BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331BE4u;
        // 0x331be8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331be4) {
            ctx->pc = 0x331BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331bd0;
        }
    }
    ctx->pc = 0x331BECu;
    // 0x331bec: 0x0  nop
    ctx->pc = 0x331becu;
    // NOP
label_331bf0:
    // 0x331bf0: 0xc0cd92c  jal         func_3364B0
    ctx->pc = 0x331BF0u;
    SET_GPR_U32(ctx, 31, 0x331BF8u);
    ctx->pc = 0x331BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331BF0u;
    // 0x331bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3364B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3364B0u, 0x331BF0u, 0x331BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331BF8u;
label_331bf8:
    // 0x331bf8: 0xc0cdd94  jal         func_337650
    ctx->pc = 0x331BF8u;
    SET_GPR_U32(ctx, 31, 0x331C00u);
    ctx->pc = 0x331BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331BF8u;
    // 0x331bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337650u, 0x331BF8u, 0x331C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C00u;
label_331c00:
    // 0x331c00: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x331c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x331c04: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x331c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x331c08: 0x86230024  lh          $v1, 0x24($s1)
    ctx->pc = 0x331c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x331c0c: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x331c0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x331c10: 0x94460010  lhu         $a2, 0x10($v0)
    ctx->pc = 0x331c10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x331c14: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x331c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x331c18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x331c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331c1c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x331c1cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x331c20: 0x0  nop
    ctx->pc = 0x331c20u;
    // NOP
    // 0x331c24: 0x0  nop
    ctx->pc = 0x331c24u;
    // NOP
    // 0x331c28: 0x1012  mflo        $v0
    ctx->pc = 0x331c28u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x331c2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x331c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x331c30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x331c30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x331c34: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x331c34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x331c38: 0xc1100a  movz        $v0, $a2, $at
    ctx->pc = 0x331c38u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x331c3c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x331c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x331c40: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x331c40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x331c44: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x331c44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x331c48: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x331c48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x331c4c: 0xc0cde20  jal         func_337880
    ctx->pc = 0x331C4Cu;
    SET_GPR_U32(ctx, 31, 0x331C54u);
    ctx->pc = 0x331C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C4Cu;
    // 0x331c50: 0x26241c7c  addiu       $a0, $s1, 0x1C7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337880u, 0x331C4Cu, 0x331C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C54u;
label_331c54:
    // 0x331c54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x331c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c58: 0xc0cc720  jal         func_331C80
    ctx->pc = 0x331C58u;
    SET_GPR_U32(ctx, 31, 0x331C60u);
    ctx->pc = 0x331C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C58u;
    // 0x331c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C80u, 0x331C58u, 0x331C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C60u;
label_331c60:
    // 0x331c60: 0xc0cc7e0  jal         func_331F80
    ctx->pc = 0x331C60u;
    SET_GPR_U32(ctx, 31, 0x331C68u);
    ctx->pc = 0x331C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C60u;
    // 0x331c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F80u, 0x331C60u, 0x331C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C68u;
label_331c68:
    // 0x331c68: 0xae221c84  sw          $v0, 0x1C84($s1)
    ctx->pc = 0x331c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7300), GPR_U32(ctx, 2));
    // 0x331c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x331c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331c78: 0x3e00008  jr          $ra
    ctx->pc = 0x331C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C78u;
        // 0x331c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331C80u;
}
