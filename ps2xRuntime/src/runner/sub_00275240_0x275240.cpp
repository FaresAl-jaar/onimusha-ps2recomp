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

// Function: sub_00275240
// Address: 0x275240 - 0x2752d4
void sub_00275240_0x275240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275240_0x275240");
#endif

    switch (ctx->pc) {
        case 0x275278u: goto label_275278;
        case 0x27528cu: goto label_27528c;
        case 0x2752a4u: goto label_2752a4;
        default: break;
    }

    ctx->pc = 0x275240u;

    // 0x275240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27524c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275254: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x275254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x275258: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x275258u;
    {
        const bool branch_taken_0x275258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275258u;
        // 0x27525c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275258) {
            ctx->pc = 0x275290u;
            goto label_275290;
        }
    }
    ctx->pc = 0x275260u;
    // 0x275260: 0x9225000d  lbu         $a1, 0xD($s1)
    ctx->pc = 0x275260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x275264: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x275264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275268: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275268u;
    {
        const bool branch_taken_0x275268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x27526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275268u;
        // 0x27526c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275268) {
            ctx->pc = 0x275278u;
            goto label_275278;
        }
    }
    ctx->pc = 0x275270u;
    // 0x275270: 0xc09d2f0  jal         func_274BC0
    ctx->pc = 0x275270u;
    SET_GPR_U32(ctx, 31, 0x275278u);
    ctx->pc = 0x275274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275270u;
    // 0x275274: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274BC0u, 0x275270u, 0x275278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275278u;
label_275278:
    // 0x275278: 0x9225000c  lbu         $a1, 0xC($s1)
    ctx->pc = 0x275278u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27527c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x275280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275284: 0xc09d2f0  jal         func_274BC0
    ctx->pc = 0x275284u;
    SET_GPR_U32(ctx, 31, 0x27528Cu);
    ctx->pc = 0x275288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275284u;
    // 0x275288: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274BC0u, 0x275284u, 0x27528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27528Cu;
label_27528c:
    // 0x27528c: 0x0  nop
    ctx->pc = 0x27528cu;
    // NOP
label_275290:
    // 0x275290: 0x9225000c  lbu         $a1, 0xC($s1)
    ctx->pc = 0x275290u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275294: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x275294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27529c: 0xc09d2f0  jal         func_274BC0
    ctx->pc = 0x27529Cu;
    SET_GPR_U32(ctx, 31, 0x2752A4u);
    ctx->pc = 0x2752A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27529Cu;
    // 0x2752a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274BC0u, 0x27529Cu, 0x2752A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752A4u;
label_2752a4:
    // 0x2752a4: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x2752a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2752a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2752a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2752ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2752acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2752b0: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2752b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2752b4: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x2752b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2752b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2752b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2752bc: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x2752bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x2752c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2752c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2752c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2752c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2752c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2752c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2752cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2752CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2752D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752CCu;
        // 0x2752d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2752CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2752D4u;
}
