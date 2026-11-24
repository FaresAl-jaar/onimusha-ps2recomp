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

// Function: sub_00149390
// Address: 0x149390 - 0x1494d0
void sub_00149390_0x149390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149390_0x149390");
#endif

    switch (ctx->pc) {
        case 0x1493a0u: goto label_1493a0;
        case 0x149408u: goto label_149408;
        case 0x149488u: goto label_149488;
        default: break;
    }

    ctx->pc = 0x149390u;

    // 0x149390: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x149394: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x149394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x149398: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x149398u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14939c: 0x27aa0000  addiu       $t2, $sp, 0x0
    ctx->pc = 0x14939cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_1493a0:
    // 0x1493a0: 0x84a90002  lh          $t1, 0x2($a1)
    ctx->pc = 0x1493a0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1493a4: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x1493a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1493a8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1493a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1493ac: 0x167182b  sltu        $v1, $t3, $a3
    ctx->pc = 0x1493acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1493b0: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1493b4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1493b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1493b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1493bc: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x1493bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x1493c0: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x1493c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
    // 0x1493c4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1493C4u;
    {
        const bool branch_taken_0x1493c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1493C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493C4u;
        // 0x1493c8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493c4) {
            ctx->pc = 0x1493A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1493a0;
        }
    }
    ctx->pc = 0x1493CCu;
    // 0x1493cc: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1493ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1493d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1493d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1493d4: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1493d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1493d8: 0x857821  addu        $t7, $a0, $a1
    ctx->pc = 0x1493d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1493dc: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x1493dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1493e0: 0x240d0400  addiu       $t5, $zero, 0x400
    ctx->pc = 0x1493e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1493e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1493e8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1493ec: 0x24980004  addiu       $t8, $a0, 0x4
    ctx->pc = 0x1493ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1493f0: 0x1052823  subu        $a1, $t0, $a1
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1493f4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1493f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1493f8: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x1493f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    // 0x1493fc: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x1493fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x149400: 0x3c0c0001  lui         $t4, 0x1
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1 << 16));
    // 0x149404: 0x0  nop
    ctx->pc = 0x149404u;
    // NOP
label_149408:
    // 0x149408: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x149408u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14940c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x14940cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x149410: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x149410u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x149414: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x149414u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149418: 0x1c6282b  sltu        $a1, $t6, $a2
    ctx->pc = 0x149418u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14941c: 0x8f080000  lw          $t0, 0x0($t8)
    ctx->pc = 0x14941cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x149420: 0x18b001a  div         $zero, $t4, $t3
    ctx->pc = 0x149420u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x149424: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x149424u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x149428: 0x0  nop
    ctx->pc = 0x149428u;
    // NOP
    // 0x14942c: 0x5812  mflo        $t3
    ctx->pc = 0x14942cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x149430: 0x1684818  mult        $t1, $t3, $t0
    ctx->pc = 0x149430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x149434: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x149434u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x149438: 0x1ab4023  subu        $t0, $t5, $t3
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x14943c: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x14943cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x149440: 0xaf090004  sw          $t1, 0x4($t8)
    ctx->pc = 0x149440u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 9));
    // 0x149444: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x149444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x149448: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x149448u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x14944c: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14944Cu;
    {
        const bool branch_taken_0x14944c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x149450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14944Cu;
        // 0x149450: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14944c) {
            ctx->pc = 0x149408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149408;
        }
    }
    ctx->pc = 0x149454u;
    // 0x149454: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x149454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x149458: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14945c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x14945cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x149460: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x149460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x149464: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x149464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149468: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x149468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14946c: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x14946Cu;
    {
        const bool branch_taken_0x14946c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x149470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14946Cu;
        // 0x149470: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14946c) {
            ctx->pc = 0x1494C8u;
            goto label_1494c8;
        }
    }
    ctx->pc = 0x149474u;
    // 0x149474: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x149474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x149478: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x149478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14947c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x14947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x149480: 0x24660000  addiu       $a2, $v1, 0x0
    ctx->pc = 0x149480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x149484: 0x0  nop
    ctx->pc = 0x149484u;
    // NOP
label_149488:
    // 0x149488: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x149488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14948c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x14948cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x149490: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x149490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x149494: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x149494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149498: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x149498u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14949c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14949cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1494a0: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1494a4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1494a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1494a8: 0x0  nop
    ctx->pc = 0x1494a8u;
    // NOP
    // 0x1494ac: 0x0  nop
    ctx->pc = 0x1494acu;
    // NOP
    // 0x1494b0: 0x1812  mflo        $v1
    ctx->pc = 0x1494b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1494b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1494b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1494b8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1494b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1494bc: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x1494BCu;
    {
        const bool branch_taken_0x1494bc = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x1494C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494BCu;
        // 0x1494c0: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494bc) {
            ctx->pc = 0x149488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149488;
        }
    }
    ctx->pc = 0x1494C4u;
    // 0x1494c4: 0x0  nop
    ctx->pc = 0x1494c4u;
    // NOP
label_1494c8:
    // 0x1494c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1494C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1494CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494C8u;
        // 0x1494cc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1494C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1494D0u;
}
