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

// Function: sub_00384990
// Address: 0x384990 - 0x384ac8
void sub_00384990_0x384990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384990_0x384990");
#endif

    switch (ctx->pc) {
        case 0x3849ccu: goto label_3849cc;
        case 0x384a18u: goto label_384a18;
        case 0x384a20u: goto label_384a20;
        case 0x384aa8u: goto label_384aa8;
        default: break;
    }

    ctx->pc = 0x384990u;

    // 0x384990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x384998: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x384998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38499c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x38499cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3849a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3849A0u;
    {
        const bool branch_taken_0x3849a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3849A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849A0u;
        // 0x3849a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849a0) {
            ctx->pc = 0x3849B0u;
            goto label_3849b0;
        }
    }
    ctx->pc = 0x3849A8u;
    // 0x3849a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3849A8u;
    {
        const bool branch_taken_0x3849a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849a8) {
            ctx->pc = 0x384AB8u;
            goto label_384ab8;
        }
    }
    ctx->pc = 0x3849B0u;
label_3849b0:
    // 0x3849b0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3849b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3849b4: 0x8c25ea24  lw          $a1, -0x15DC($at)
    ctx->pc = 0x3849b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3849b8: 0x30a32008  andi        $v1, $a1, 0x2008
    ctx->pc = 0x3849b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8200);
    // 0x3849bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3849BCu;
    {
        const bool branch_taken_0x3849bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849bc) {
            ctx->pc = 0x3849D8u;
            goto label_3849d8;
        }
    }
    ctx->pc = 0x3849C4u;
    // 0x3849c4: 0xc0e1370  jal         func_384DC0
    ctx->pc = 0x3849C4u;
    SET_GPR_U32(ctx, 31, 0x3849CCu);
    ctx->pc = 0x384DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384DC0u, 0x3849C4u, 0x3849CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849CCu;
label_3849cc:
    // 0x3849cc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3849CCu;
    {
        const bool branch_taken_0x3849cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849cc) {
            ctx->pc = 0x384AB8u;
            goto label_384ab8;
        }
    }
    ctx->pc = 0x3849D4u;
    // 0x3849d4: 0x0  nop
    ctx->pc = 0x3849d4u;
    // NOP
label_3849d8:
    // 0x3849d8: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x3849d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x3849dc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3849DCu;
    {
        const bool branch_taken_0x3849dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849dc) {
            ctx->pc = 0x384A28u;
            goto label_384a28;
        }
    }
    ctx->pc = 0x3849E4u;
    // 0x3849e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3849e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3849e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3849e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3849ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3849ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3849f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3849f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3849f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3849f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3849f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3849f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3849fc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3849fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384a00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x384a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a10: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384A10u;
    SET_GPR_U32(ctx, 31, 0x384A18u);
    ctx->pc = 0x384A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A10u;
    // 0x384a14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384A10u, 0x384A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A18u;
label_384a18:
    // 0x384a18: 0xc0e114c  jal         func_384530
    ctx->pc = 0x384A18u;
    SET_GPR_U32(ctx, 31, 0x384A20u);
    ctx->pc = 0x384A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A18u;
    // 0x384a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384530u, 0x384A18u, 0x384A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A20u;
label_384a20:
    // 0x384a20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x384A20u;
    {
        const bool branch_taken_0x384a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384a20) {
            ctx->pc = 0x384AB8u;
            goto label_384ab8;
        }
    }
    ctx->pc = 0x384A28u;
label_384a28:
    // 0x384a28: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x384a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x384a2c: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x384a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x384a30: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x384a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x384a34: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x384A34u;
    {
        const bool branch_taken_0x384a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384a34) {
            ctx->pc = 0x384AB8u;
            goto label_384ab8;
        }
    }
    ctx->pc = 0x384A3Cu;
    // 0x384a3c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x384a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x384a40: 0x820c002f  lb          $t4, 0x2F($s0)
    ctx->pc = 0x384a40u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x384a44: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x384a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x384a48: 0x820d0030  lb          $t5, 0x30($s0)
    ctx->pc = 0x384a48u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384a4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x384a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x384a50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x384a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x384a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384a58: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x384a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x384a5c: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x384a5cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x384a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a64: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x384a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x384a68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x384a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384a6c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x384a6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x384a70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384a74: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x384a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x384a78: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384a7c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x384a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x384a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a84: 0x6d001a  div         $zero, $v1, $t5
    ctx->pc = 0x384a84u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x384a88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x384a8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384a90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384a94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a98: 0x1810  mfhi        $v1
    ctx->pc = 0x384a98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x384a9c: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x384a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x384aa0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384AA0u;
    SET_GPR_U32(ctx, 31, 0x384AA8u);
    ctx->pc = 0x384AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AA0u;
    // 0x384aa4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384AA0u, 0x384AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AA8u;
label_384aa8:
    // 0x384aa8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x384aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x384aac: 0xa603002c  sh          $v1, 0x2C($s0)
    ctx->pc = 0x384aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x384ab0: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x384ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x384ab4: 0x0  nop
    ctx->pc = 0x384ab4u;
    // NOP
label_384ab8:
    // 0x384ab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384abc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x384abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x384AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AC0u;
        // 0x384ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384AC8u;
}
