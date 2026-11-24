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

// Function: sub_0038E060
// Address: 0x38e060 - 0x38e154
void sub_0038E060_0x38e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E060_0x38e060");
#endif

    switch (ctx->pc) {
        case 0x38e084u: goto label_38e084;
        case 0x38e0acu: goto label_38e0ac;
        case 0x38e138u: goto label_38e138;
        default: break;
    }

    ctx->pc = 0x38e060u;

    // 0x38e060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38e064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38e064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38e068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38e068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38e06c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38e070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38e074: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x38e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x38e078: 0x94520000  lhu         $s2, 0x0($v0)
    ctx->pc = 0x38e078u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38e07c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x38E07Cu;
    SET_GPR_U32(ctx, 31, 0x38E084u);
    ctx->pc = 0x38E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E07Cu;
    // 0x38e080: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x38E07Cu, 0x38E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E084u;
label_38e084:
    // 0x38e084: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x38e084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x38e088: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x38e088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38e08c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x38e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x38e090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38e094: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x38e094u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38e098: 0x0  nop
    ctx->pc = 0x38e098u;
    // NOP
    // 0x38e09c: 0x0  nop
    ctx->pc = 0x38e09cu;
    // NOP
    // 0x38e0a0: 0x1012  mflo        $v0
    ctx->pc = 0x38e0a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x38e0a4: 0xc0e4104  jal         func_390410
    ctx->pc = 0x38E0A4u;
    SET_GPR_U32(ctx, 31, 0x38E0ACu);
    ctx->pc = 0x38E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E0A4u;
    // 0x38e0a8: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390410u, 0x38E0A4u, 0x38E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E0ACu;
label_38e0ac:
    // 0x38e0ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E0ACu;
    {
        const bool branch_taken_0x38e0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e0ac) {
            ctx->pc = 0x38E0C0u;
            goto label_38e0c0;
        }
    }
    ctx->pc = 0x38E0B4u;
    // 0x38e0b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x38E0B4u;
    {
        const bool branch_taken_0x38e0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0B4u;
        // 0x38e0b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0b4) {
            ctx->pc = 0x38E108u;
            goto label_38e108;
        }
    }
    ctx->pc = 0x38E0BCu;
    // 0x38e0bc: 0x0  nop
    ctx->pc = 0x38e0bcu;
    // NOP
label_38e0c0:
    // 0x38e0c0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E0C0u;
    {
        const bool branch_taken_0x38e0c0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x38E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0C0u;
        // 0x38e0c4: 0x28410004  slti        $at, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0c0) {
            ctx->pc = 0x38E0D8u;
            goto label_38e0d8;
        }
    }
    ctx->pc = 0x38E0C8u;
    // 0x38e0c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E0C8u;
    {
        const bool branch_taken_0x38e0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e0c8) {
            ctx->pc = 0x38E0D8u;
            goto label_38e0d8;
        }
    }
    ctx->pc = 0x38E0D0u;
    // 0x38e0d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38E0D0u;
    {
        const bool branch_taken_0x38e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0D0u;
        // 0x38e0d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0d0) {
            ctx->pc = 0x38E108u;
            goto label_38e108;
        }
    }
    ctx->pc = 0x38E0D8u;
label_38e0d8:
    // 0x38e0d8: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x38e0d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x38e0dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E0DCu;
    {
        const bool branch_taken_0x38e0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0DCu;
        // 0x38e0e0: 0x28410007  slti        $at, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0dc) {
            ctx->pc = 0x38E0F8u;
            goto label_38e0f8;
        }
    }
    ctx->pc = 0x38E0E4u;
    // 0x38e0e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E0E4u;
    {
        const bool branch_taken_0x38e0e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e0e4) {
            ctx->pc = 0x38E0F8u;
            goto label_38e0f8;
        }
    }
    ctx->pc = 0x38E0ECu;
    // 0x38e0ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38E0ECu;
    {
        const bool branch_taken_0x38e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0ECu;
        // 0x38e0f0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0ec) {
            ctx->pc = 0x38E108u;
            goto label_38e108;
        }
    }
    ctx->pc = 0x38E0F4u;
    // 0x38e0f4: 0x0  nop
    ctx->pc = 0x38e0f4u;
    // NOP
label_38e0f8:
    // 0x38e0f8: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x38e0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x38e0fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38E0FCu;
    {
        const bool branch_taken_0x38e0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e0fc) {
            ctx->pc = 0x38E108u;
            goto label_38e108;
        }
    }
    ctx->pc = 0x38E104u;
    // 0x38e104: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x38e104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38e108:
    // 0x38e108: 0x92252b3c  lbu         $a1, 0x2B3C($s1)
    ctx->pc = 0x38e108u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11068)));
    // 0x38e10c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x38e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x38e110: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x38e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x38e114: 0x248420d0  addiu       $a0, $a0, 0x20D0
    ctx->pc = 0x38e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8400));
    // 0x38e118: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38e118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38e11c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x38e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x38e120: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x38e120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x38e124: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x38e124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x38e128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38e12c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38e130: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x38E130u;
    SET_GPR_U32(ctx, 31, 0x38E138u);
    ctx->pc = 0x38E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E130u;
    // 0x38e134: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x38E130u, 0x38E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E138u;
label_38e138:
    // 0x38e138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38e138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x38e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x38e140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e14c: 0x3e00008  jr          $ra
    ctx->pc = 0x38E14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E14Cu;
        // 0x38e150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E154u;
}
