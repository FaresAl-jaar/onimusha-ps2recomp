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

// Function: sub_00239EF8
// Address: 0x239ef8 - 0x23a024
void sub_00239EF8_0x239ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239EF8_0x239ef8");
#endif

    switch (ctx->pc) {
        case 0x239f3cu: goto label_239f3c;
        case 0x239f48u: goto label_239f48;
        case 0x239f54u: goto label_239f54;
        case 0x239f64u: goto label_239f64;
        case 0x239f9cu: goto label_239f9c;
        case 0x239fa8u: goto label_239fa8;
        case 0x239fb4u: goto label_239fb4;
        default: break;
    }

    ctx->pc = 0x239ef8u;

    // 0x239ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239f00: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x239f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239f08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x239f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239f10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x239f10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239f18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x239f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x239f1c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x239f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x239f20: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x239f24: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x239f28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x239f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x239f2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x239F2Cu;
    {
        const bool branch_taken_0x239f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F2Cu;
        // 0x239f30: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f2c) {
            ctx->pc = 0x239F88u;
            goto label_239f88;
        }
    }
    ctx->pc = 0x239F34u;
    // 0x239f34: 0xc08db02  jal         func_236C08
    ctx->pc = 0x239F34u;
    SET_GPR_U32(ctx, 31, 0x239F3Cu);
    ctx->pc = 0x239F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F34u;
    // 0x239f38: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C08u, 0x239F34u, 0x239F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F3Cu;
label_239f3c:
    // 0x239f3c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x239f40: 0xc08da9c  jal         func_236A70
    ctx->pc = 0x239F40u;
    SET_GPR_U32(ctx, 31, 0x239F48u);
    ctx->pc = 0x239F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F40u;
    // 0x239f44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A70u, 0x239F40u, 0x239F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F48u;
label_239f48:
    // 0x239f48: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x239f4c: 0xc08d564  jal         func_235590
    ctx->pc = 0x239F4Cu;
    SET_GPR_U32(ctx, 31, 0x239F54u);
    ctx->pc = 0x239F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F4Cu;
    // 0x239f50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x239F4Cu, 0x239F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F54u;
label_239f54:
    // 0x239f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f5c: 0xc08ec42  jal         func_23B108
    ctx->pc = 0x239F5Cu;
    SET_GPR_U32(ctx, 31, 0x239F64u);
    ctx->pc = 0x239F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F5Cu;
    // 0x239f60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B108u, 0x239F5Cu, 0x239F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F64u;
label_239f64:
    // 0x239f64: 0x8e4300a8  lw          $v1, 0xA8($s2)
    ctx->pc = 0x239f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x239f68: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x239f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x239f6c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x239f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x239f70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x239f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x239f74: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x239f74u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x239f78: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x239f7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x239F7Cu;
    {
        const bool branch_taken_0x239f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F7Cu;
        // 0x239f80: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f7c) {
            ctx->pc = 0x239FF0u;
            goto label_239ff0;
        }
    }
    ctx->pc = 0x239F84u;
    // 0x239f84: 0x0  nop
    ctx->pc = 0x239f84u;
    // NOP
label_239f88:
    // 0x239f88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x239f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239f8c: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x239F8Cu;
    {
        const bool branch_taken_0x239f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239f8c) {
            ctx->pc = 0x239F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F8Cu;
            // 0x239f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239FE8u;
            goto label_239fe8;
        }
    }
    ctx->pc = 0x239F94u;
    // 0x239f94: 0xc08db20  jal         func_236C80
    ctx->pc = 0x239F94u;
    SET_GPR_U32(ctx, 31, 0x239F9Cu);
    ctx->pc = 0x239F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F94u;
    // 0x239f98: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x239F94u, 0x239F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F9Cu;
label_239f9c:
    // 0x239f9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x239fa0: 0xc08db02  jal         func_236C08
    ctx->pc = 0x239FA0u;
    SET_GPR_U32(ctx, 31, 0x239FA8u);
    ctx->pc = 0x239FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FA0u;
    // 0x239fa4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C08u, 0x239FA0u, 0x239FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FA8u;
label_239fa8:
    // 0x239fa8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x239fac: 0xc08db0e  jal         func_236C38
    ctx->pc = 0x239FACu;
    SET_GPR_U32(ctx, 31, 0x239FB4u);
    ctx->pc = 0x239FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FACu;
    // 0x239fb0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C38u, 0x239FACu, 0x239FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FB4u;
label_239fb4:
    // 0x239fb4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x239fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239fb8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x239fb8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x239fbc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239FBCu;
    {
        const bool branch_taken_0x239fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239fbc) {
            ctx->pc = 0x239FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239FBCu;
            // 0x239fc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x239FC4u;
            goto label_239fc4;
        }
    }
    ctx->pc = 0x239FC4u;
label_239fc4:
    // 0x239fc4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x239fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x239fc8: 0x1812  mflo        $v1
    ctx->pc = 0x239fc8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x239fcc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x239fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x239fd0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x239fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x239fd4: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x239fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x239fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239FDCu;
    {
        const bool branch_taken_0x239fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FDCu;
        // 0x239fe0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fdc) {
            ctx->pc = 0x239FF0u;
            goto label_239ff0;
        }
    }
    ctx->pc = 0x239FE4u;
    // 0x239fe4: 0x0  nop
    ctx->pc = 0x239fe4u;
    // NOP
label_239fe8:
    // 0x239fe8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x239fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x239fec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x239fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_239ff0:
    // 0x239ff0: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x239ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x239ff4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x239ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x239ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x239ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a004: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x23a004u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23a008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a00c: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x23a00cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x23a010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23a010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a014: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23a014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x23a018: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a01c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A01Cu;
        // 0x23a020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A024u;
}
