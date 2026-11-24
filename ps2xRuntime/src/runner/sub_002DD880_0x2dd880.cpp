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

// Function: sub_002DD880
// Address: 0x2dd880 - 0x2ddbb8
void sub_002DD880_0x2dd880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD880_0x2dd880");
#endif

    switch (ctx->pc) {
        case 0x2dd8d8u: goto label_2dd8d8;
        case 0x2dd8e8u: goto label_2dd8e8;
        case 0x2dd964u: goto label_2dd964;
        case 0x2dd990u: goto label_2dd990;
        case 0x2dd9b0u: goto label_2dd9b0;
        case 0x2dd9dcu: goto label_2dd9dc;
        case 0x2dda1cu: goto label_2dda1c;
        case 0x2dda48u: goto label_2dda48;
        case 0x2ddb28u: goto label_2ddb28;
        case 0x2ddb4cu: goto label_2ddb4c;
        case 0x2ddb90u: goto label_2ddb90;
        default: break;
    }

    ctx->pc = 0x2dd880u;

    // 0x2dd880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dd880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dd884: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dd884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2dd888: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dd888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dd88c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dd890: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2dd890u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd894: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dd894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dd898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dd89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd8a8: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x2dd8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2dd8ac: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2dd8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2dd8b0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DD8B0u;
    {
        const bool branch_taken_0x2dd8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8B0u;
        // 0x2dd8b4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8b0) {
            ctx->pc = 0x2DD908u;
            goto label_2dd908;
        }
    }
    ctx->pc = 0x2DD8B8u;
    // 0x2dd8b8: 0x86a30054  lh          $v1, 0x54($s5)
    ctx->pc = 0x2dd8b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x2dd8bc: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2DD8BCu;
    {
        const bool branch_taken_0x2dd8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd8bc) {
            ctx->pc = 0x2DD990u;
            goto label_2dd990;
        }
    }
    ctx->pc = 0x2DD8C4u;
    // 0x2dd8c4: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2dd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dd8c8: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x2dd8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x2dd8cc: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x2dd8ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2dd8d0: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DD8D0u;
    {
        const bool branch_taken_0x2dd8d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8D0u;
        // 0x2dd8d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8d0) {
            ctx->pc = 0x2DD990u;
            goto label_2dd990;
        }
    }
    ctx->pc = 0x2DD8D8u;
label_2dd8d8:
    // 0x2dd8d8: 0x102e3c  dsll32      $a1, $s0, 24
    ctx->pc = 0x2dd8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
    // 0x2dd8dc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2dd8dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2dd8e0: 0xc0b76f0  jal         func_2DDBC0
    ctx->pc = 0x2DD8E0u;
    SET_GPR_U32(ctx, 31, 0x2DD8E8u);
    ctx->pc = 0x2DD8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8E0u;
    // 0x2dd8e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDBC0u, 0x2DD8E0u, 0x2DD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8E8u;
label_2dd8e8:
    // 0x2dd8e8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2dd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dd8ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dd8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2dd8f0: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x2dd8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x2dd8f4: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x2dd8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dd8f8: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DD8F8u;
    {
        const bool branch_taken_0x2dd8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd8f8) {
            ctx->pc = 0x2DD8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd8d8;
        }
    }
    ctx->pc = 0x2DD900u;
    // 0x2dd900: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD900u;
    {
        const bool branch_taken_0x2dd900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd900) {
            ctx->pc = 0x2DD990u;
            goto label_2dd990;
        }
    }
    ctx->pc = 0x2DD908u;
label_2dd908:
    // 0x2dd908: 0x86a50054  lh          $a1, 0x54($s5)
    ctx->pc = 0x2dd908u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x2dd90c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dd90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dd910: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x2dd910u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2dd914: 0x0  nop
    ctx->pc = 0x2dd914u;
    // NOP
    // 0x2dd918: 0x0  nop
    ctx->pc = 0x2dd918u;
    // NOP
    // 0x2dd91c: 0x1810  mfhi        $v1
    ctx->pc = 0x2dd91cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2dd920: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DD920u;
    {
        const bool branch_taken_0x2dd920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd920) {
            ctx->pc = 0x2DD990u;
            goto label_2dd990;
        }
    }
    ctx->pc = 0x2DD928u;
    // 0x2dd928: 0x90c30012  lbu         $v1, 0x12($a2)
    ctx->pc = 0x2dd928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2dd92c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dd92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dd930: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DD930u;
    {
        const bool branch_taken_0x2dd930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd930) {
            ctx->pc = 0x2DD970u;
            goto label_2dd970;
        }
    }
    ctx->pc = 0x2DD938u;
    // 0x2dd938: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2dd938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dd93c: 0x86a50084  lh          $a1, 0x84($s5)
    ctx->pc = 0x2dd93cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 132)));
    // 0x2dd940: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x2dd940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x2dd944: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2dd944u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dd948: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DD948u;
    {
        const bool branch_taken_0x2dd948 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd948) {
            ctx->pc = 0x2DD990u;
            goto label_2dd990;
        }
    }
    ctx->pc = 0x2DD950u;
    // 0x2dd950: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2dd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dd954: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x2dd954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2dd958: 0xa6a20084  sh          $v0, 0x84($s5)
    ctx->pc = 0x2dd958u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dd95c: 0xc0b76f0  jal         func_2DDBC0
    ctx->pc = 0x2DD95Cu;
    SET_GPR_U32(ctx, 31, 0x2DD964u);
    ctx->pc = 0x2DD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD95Cu;
    // 0x2dd960: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDBC0u, 0x2DD95Cu, 0x2DD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD964u;
label_2dd964:
    // 0x2dd964: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DD964u;
    {
        const bool branch_taken_0x2dd964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd964) {
            ctx->pc = 0x2DD990u;
            goto label_2dd990;
        }
    }
    ctx->pc = 0x2DD96Cu;
    // 0x2dd96c: 0x0  nop
    ctx->pc = 0x2dd96cu;
    // NOP
label_2dd970:
    // 0x2dd970: 0x86a30084  lh          $v1, 0x84($s5)
    ctx->pc = 0x2dd970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 132)));
    // 0x2dd974: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD974u;
    {
        const bool branch_taken_0x2dd974 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2dd974) {
            ctx->pc = 0x2DD990u;
            goto label_2dd990;
        }
    }
    ctx->pc = 0x2DD97Cu;
    // 0x2dd97c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2dd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dd980: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x2dd980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2dd984: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2dd984u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2dd988: 0xc0b76f0  jal         func_2DDBC0
    ctx->pc = 0x2DD988u;
    SET_GPR_U32(ctx, 31, 0x2DD990u);
    ctx->pc = 0x2DD98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD988u;
    // 0x2dd98c: 0xa6a20084  sh          $v0, 0x84($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 132), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDBC0u, 0x2DD988u, 0x2DD990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD990u;
label_2dd990:
    // 0x2dd990: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x2dd990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dd994: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dd994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd998: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x2dd998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2dd99c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2dd99cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dd9a0: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x2DD9A0u;
    {
        const bool branch_taken_0x2dd9a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9A0u;
        // 0x2dd9a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9a0) {
            ctx->pc = 0x2DDAF0u;
            goto label_2ddaf0;
        }
    }
    ctx->pc = 0x2DD9A8u;
    // 0x2dd9a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dd9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dd9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd9b0:
    // 0x2dd9b0: 0x8ea4007c  lw          $a0, 0x7C($s5)
    ctx->pc = 0x2dd9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x2dd9b4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2dd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2dd9b8: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x2dd9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2dd9bc: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x2dd9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2dd9c0: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DD9C0u;
    {
        const bool branch_taken_0x2dd9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd9c0) {
            ctx->pc = 0x2DDAD0u;
            goto label_2ddad0;
        }
    }
    ctx->pc = 0x2DD9C8u;
    // 0x2dd9c8: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x2dd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x2dd9cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2dd9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9d4: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x2DD9D4u;
    SET_GPR_U32(ctx, 31, 0x2DD9DCu);
    ctx->pc = 0x2DD9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9D4u;
    // 0x2dd9d8: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x2DD9D4u, 0x2DD9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9DCu;
label_2dd9dc:
    // 0x2dd9dc: 0x92420024  lbu         $v0, 0x24($s2)
    ctx->pc = 0x2dd9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2dd9e0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD9E0u;
    {
        const bool branch_taken_0x2dd9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9e0) {
            ctx->pc = 0x2DDA40u;
            goto label_2dda40;
        }
    }
    ctx->pc = 0x2DD9E8u;
    // 0x2dd9e8: 0x86a60080  lh          $a2, 0x80($s5)
    ctx->pc = 0x2dd9e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x2dd9ec: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x2dd9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2dd9f0: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x2dd9f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dd9f4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DD9F4u;
    {
        const bool branch_taken_0x2dd9f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9f4) {
            ctx->pc = 0x2DDA40u;
            goto label_2dda40;
        }
    }
    ctx->pc = 0x2DD9FCu;
    // 0x2dd9fc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD9FCu;
    {
        const bool branch_taken_0x2dd9fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9FCu;
        // 0x2dda00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9fc) {
            ctx->pc = 0x2DDA14u;
            goto label_2dda14;
        }
    }
    ctx->pc = 0x2DDA04u;
    // 0x2dda04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dda04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dda08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dda08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dda0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDA0Cu;
    {
        const bool branch_taken_0x2dda0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA0Cu;
        // 0x2dda10: 0x3c024380  lui         $v0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda0c) {
            ctx->pc = 0x2DDA20u;
            goto label_2dda20;
        }
    }
    ctx->pc = 0x2DDA14u;
label_2dda14:
    // 0x2dda14: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x2DDA14u;
    SET_GPR_U32(ctx, 31, 0x2DDA1Cu);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x2DDA14u, 0x2DDA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA1Cu;
label_2dda1c:
    // 0x2dda1c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2dda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_2dda20:
    // 0x2dda20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dda20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dda24: 0x0  nop
    ctx->pc = 0x2dda24u;
    // NOP
    // 0x2dda28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dda28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dda2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dda2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dda30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dda30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dda34: 0x0  nop
    ctx->pc = 0x2dda34u;
    // NOP
    // 0x2dda38: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x2dda38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dda3c: 0x0  nop
    ctx->pc = 0x2dda3cu;
    // NOP
label_2dda40:
    // 0x2dda40: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2DDA40u;
    SET_GPR_U32(ctx, 31, 0x2DDA48u);
    ctx->pc = 0x2DDA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA40u;
    // 0x2dda44: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2DDA40u, 0x2DDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA48u;
label_2dda48:
    // 0x2dda48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDA48u;
    {
        const bool branch_taken_0x2dda48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA48u;
        // 0x2dda4c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda48) {
            ctx->pc = 0x2DDA58u;
            goto label_2dda58;
        }
    }
    ctx->pc = 0x2DDA50u;
    // 0x2dda50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2DDA50u;
    {
        const bool branch_taken_0x2dda50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA50u;
        // 0x2dda54: 0xa6430020  sh          $v1, 0x20($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda50) {
            ctx->pc = 0x2DDAD0u;
            goto label_2ddad0;
        }
    }
    ctx->pc = 0x2DDA58u;
label_2dda58:
    // 0x2dda58: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x2dda58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2dda5c: 0x86430028  lh          $v1, 0x28($s2)
    ctx->pc = 0x2dda5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2dda60: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2dda60u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2dda64: 0x0  nop
    ctx->pc = 0x2dda64u;
    // NOP
    // 0x2dda68: 0x0  nop
    ctx->pc = 0x2dda68u;
    // NOP
    // 0x2dda6c: 0x1810  mfhi        $v1
    ctx->pc = 0x2dda6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2dda70: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DDA70u;
    {
        const bool branch_taken_0x2dda70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dda70) {
            ctx->pc = 0x2DDAA0u;
            goto label_2ddaa0;
        }
    }
    ctx->pc = 0x2DDA78u;
    // 0x2dda78: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2dda78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dda7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2dda7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2dda80: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2dda80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2dda84: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2dda84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dda88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dda88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dda8c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2dda90: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dda94: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2dda94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2dda98: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2dda98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2dda9c: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x2dda9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
label_2ddaa0:
    // 0x2ddaa0: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x2ddaa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2ddaa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ddaa8: 0xa6430020  sh          $v1, 0x20($s2)
    ctx->pc = 0x2ddaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ddaac: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x2ddaacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2ddab0: 0x28617ff1  slti        $at, $v1, 0x7FF1
    ctx->pc = 0x2ddab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
    // 0x2ddab4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDAB4u;
    {
        const bool branch_taken_0x2ddab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAB4u;
        // 0x2ddab8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddab4) {
            ctx->pc = 0x2DDAC8u;
            goto label_2ddac8;
        }
    }
    ctx->pc = 0x2DDABCu;
    // 0x2ddabc: 0xa2430024  sb          $v1, 0x24($s2)
    ctx->pc = 0x2ddabcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ddac0: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x2ddac0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ddac4: 0x0  nop
    ctx->pc = 0x2ddac4u;
    // NOP
label_2ddac8:
    // 0x2ddac8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ddac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ddacc: 0x0  nop
    ctx->pc = 0x2ddaccu;
    // NOP
label_2ddad0:
    // 0x2ddad0: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x2ddad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2ddad4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ddad4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ddad8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2ddad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2ddadc: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x2ddadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ddae0: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2ddae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ddae4: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2DDAE4u;
    {
        const bool branch_taken_0x2ddae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAE4u;
        // 0x2ddae8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddae4) {
            ctx->pc = 0x2DD9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd9b0;
        }
    }
    ctx->pc = 0x2DDAECu;
    // 0x2ddaec: 0x0  nop
    ctx->pc = 0x2ddaecu;
    // NOP
label_2ddaf0:
    // 0x2ddaf0: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x2ddaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2ddaf4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x2ddaf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2ddaf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ddaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ddafc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DDAFCu;
    {
        const bool branch_taken_0x2ddafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddafc) {
            ctx->pc = 0x2DDB30u;
            goto label_2ddb30;
        }
    }
    ctx->pc = 0x2DDB04u;
    // 0x2ddb04: 0x9083000d  lbu         $v1, 0xD($a0)
    ctx->pc = 0x2ddb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x2ddb08: 0x86a40084  lh          $a0, 0x84($s5)
    ctx->pc = 0x2ddb08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 132)));
    // 0x2ddb0c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2ddb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ddb10: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2DDB10u;
    {
        const bool branch_taken_0x2ddb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb10) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDB18u;
    // 0x2ddb18: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2DDB18u;
    {
        const bool branch_taken_0x2ddb18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB18u;
        // 0x2ddb1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb18) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDB20u;
    // 0x2ddb20: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2DDB20u;
    SET_GPR_U32(ctx, 31, 0x2DDB28u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2DDB20u, 0x2DDB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB28u;
label_2ddb28:
    // 0x2ddb28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DDB28u;
    {
        const bool branch_taken_0x2ddb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb28) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDB30u;
label_2ddb30:
    // 0x2ddb30: 0x86a30084  lh          $v1, 0x84($s5)
    ctx->pc = 0x2ddb30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 132)));
    // 0x2ddb34: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDB34u;
    {
        const bool branch_taken_0x2ddb34 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2ddb34) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDB3Cu;
    // 0x2ddb3c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDB3Cu;
    {
        const bool branch_taken_0x2ddb3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB3Cu;
        // 0x2ddb40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb3c) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDB44u;
    // 0x2ddb44: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2DDB44u;
    SET_GPR_U32(ctx, 31, 0x2DDB4Cu);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2DDB44u, 0x2DDB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB4Cu;
label_2ddb4c:
    // 0x2ddb4c: 0x0  nop
    ctx->pc = 0x2ddb4cu;
    // NOP
label_2ddb50:
    // 0x2ddb50: 0x7ac30020  lq          $v1, 0x20($s6)
    ctx->pc = 0x2ddb50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2ddb54: 0x7ea30040  sq          $v1, 0x40($s5)
    ctx->pc = 0x2ddb54u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 3));
    // 0x2ddb58: 0x86a30054  lh          $v1, 0x54($s5)
    ctx->pc = 0x2ddb58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x2ddb5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ddb60: 0xa6a30054  sh          $v1, 0x54($s5)
    ctx->pc = 0x2ddb60u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ddb64: 0x86a30054  lh          $v1, 0x54($s5)
    ctx->pc = 0x2ddb64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x2ddb68: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x2ddb68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x2ddb6c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDB6Cu;
    {
        const bool branch_taken_0x2ddb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB6Cu;
        // 0x2ddb70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb6c) {
            ctx->pc = 0x2DDB78u;
            goto label_2ddb78;
        }
    }
    ctx->pc = 0x2DDB74u;
    // 0x2ddb74: 0xa6a30054  sh          $v1, 0x54($s5)
    ctx->pc = 0x2ddb74u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 84), (uint16_t)GPR_U32(ctx, 3));
label_2ddb78:
    // 0x2ddb78: 0x92a30050  lbu         $v1, 0x50($s5)
    ctx->pc = 0x2ddb78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2ddb7c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ddb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ddb80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDB80u;
    {
        const bool branch_taken_0x2ddb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB80u;
        // 0x2ddb84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb80) {
            ctx->pc = 0x2DDB90u;
            goto label_2ddb90;
        }
    }
    ctx->pc = 0x2DDB88u;
    // 0x2ddb88: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2DDB88u;
    SET_GPR_U32(ctx, 31, 0x2DDB90u);
    ctx->pc = 0x2DDB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB88u;
    // 0x2ddb8c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2DDB88u, 0x2DDB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB90u;
label_2ddb90:
    // 0x2ddb90: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ddb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ddb94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ddb94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ddb98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ddb98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ddb9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ddb9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddba0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ddba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ddba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ddbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBB0u;
        // 0x2ddbb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDBB8u;
}
