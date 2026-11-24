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

// Function: sub_00386900
// Address: 0x386900 - 0x386a10
void sub_00386900_0x386900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386900_0x386900");
#endif

    switch (ctx->pc) {
        case 0x386960u: goto label_386960;
        default: break;
    }

    ctx->pc = 0x386900u;

    // 0x386900: 0x74e3c  dsll32      $t1, $a3, 24
    ctx->pc = 0x386900u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 24));
    // 0x386904: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x386904u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x386908: 0x29210003  slti        $at, $t1, 0x3
    ctx->pc = 0x386908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x38690c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x38690Cu;
    {
        const bool branch_taken_0x38690c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38690c) {
            ctx->pc = 0x386930u;
            goto label_386930;
        }
    }
    ctx->pc = 0x386914u;
    // 0x386914: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x386914u;
    {
        const bool branch_taken_0x386914 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x386918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386914u;
        // 0x386918: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386914) {
            ctx->pc = 0x386938u;
            goto label_386938;
        }
    }
    ctx->pc = 0x38691Cu;
    // 0x38691c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x38691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x386920: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x386920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x386924: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x386924u;
    {
        const bool branch_taken_0x386924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x386924) {
            ctx->pc = 0x386938u;
            goto label_386938;
        }
    }
    ctx->pc = 0x38692Cu;
    // 0x38692c: 0x0  nop
    ctx->pc = 0x38692cu;
    // NOP
label_386930:
    // 0x386930: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x386930u;
    {
        const bool branch_taken_0x386930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386930) {
            ctx->pc = 0x386A08u;
            goto label_386a08;
        }
    }
    ctx->pc = 0x386938u;
label_386938:
    // 0x386938: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x386938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x38693c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x38693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x386940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x386940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x386944: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x386944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x386948: 0x24830120  addiu       $v1, $a0, 0x120
    ctx->pc = 0x386948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x38694c: 0x8084012a  lb          $a0, 0x12A($a0)
    ctx->pc = 0x38694cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 298)));
    // 0x386950: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x386950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x386954: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x386954u;
    {
        const bool branch_taken_0x386954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x386958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386954u;
        // 0x386958: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386954) {
            ctx->pc = 0x386A08u;
            goto label_386a08;
        }
    }
    ctx->pc = 0x38695Cu;
    // 0x38695c: 0x0  nop
    ctx->pc = 0x38695cu;
    // NOP
label_386960:
    // 0x386960: 0x80690004  lb          $t1, 0x4($v1)
    ctx->pc = 0x386960u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x386964: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x386964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x386968: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x386968u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x38696c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x38696cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x386970: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x386970u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x386974: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x386974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x386978: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x386978u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38697c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x38697Cu;
    {
        const bool branch_taken_0x38697c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x386980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38697Cu;
        // 0x386980: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38697c) {
            ctx->pc = 0x3869D0u;
            goto label_3869d0;
        }
    }
    ctx->pc = 0x386984u;
    // 0x386984: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x386984u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x386988: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x386988u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x38698c: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x38698cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x386990: 0xa0e80001  sb          $t0, 0x1($a3)
    ctx->pc = 0x386990u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x386994: 0x8064000b  lb          $a0, 0xB($v1)
    ctx->pc = 0x386994u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x386998: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x386998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38699c: 0xa064000b  sb          $a0, 0xB($v1)
    ctx->pc = 0x38699cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x3869a0: 0x80640004  lb          $a0, 0x4($v1)
    ctx->pc = 0x3869a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3869a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3869a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3869a8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x3869a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3869ac: 0x8065000a  lb          $a1, 0xA($v1)
    ctx->pc = 0x3869acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3869b0: 0x80640004  lb          $a0, 0x4($v1)
    ctx->pc = 0x3869b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3869b4: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x3869b4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3869b8: 0x0  nop
    ctx->pc = 0x3869b8u;
    // NOP
    // 0x3869bc: 0x0  nop
    ctx->pc = 0x3869bcu;
    // NOP
    // 0x3869c0: 0x2010  mfhi        $a0
    ctx->pc = 0x3869c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3869c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3869C4u;
    {
        const bool branch_taken_0x3869c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3869C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869C4u;
        // 0x3869c8: 0xa0640004  sb          $a0, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869c4) {
            ctx->pc = 0x386A08u;
            goto label_386a08;
        }
    }
    ctx->pc = 0x3869CCu;
    // 0x3869cc: 0x0  nop
    ctx->pc = 0x3869ccu;
    // NOP
label_3869d0:
    // 0x3869d0: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x3869d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3869d4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x3869d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3869d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3869d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3869dc: 0x8067000a  lb          $a3, 0xA($v1)
    ctx->pc = 0x3869dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3869e0: 0x80640004  lb          $a0, 0x4($v1)
    ctx->pc = 0x3869e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3869e4: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x3869e4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3869e8: 0x0  nop
    ctx->pc = 0x3869e8u;
    // NOP
    // 0x3869ec: 0x0  nop
    ctx->pc = 0x3869ecu;
    // NOP
    // 0x3869f0: 0x2010  mfhi        $a0
    ctx->pc = 0x3869f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3869f4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x3869f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3869f8: 0x8064000a  lb          $a0, 0xA($v1)
    ctx->pc = 0x3869f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3869fc: 0x144202a  slt         $a0, $t2, $a0
    ctx->pc = 0x3869fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x386a00: 0x1480ffd7  bnez        $a0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x386A00u;
    {
        const bool branch_taken_0x386a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x386a00) {
            ctx->pc = 0x386960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386960;
        }
    }
    ctx->pc = 0x386A08u;
label_386a08:
    // 0x386a08: 0x3e00008  jr          $ra
    ctx->pc = 0x386A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386A10u;
}
