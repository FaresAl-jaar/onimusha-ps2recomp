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

// Function: sub_00211230
// Address: 0x211230 - 0x2112e4
void sub_00211230_0x211230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211230_0x211230");
#endif

    switch (ctx->pc) {
        case 0x21124cu: goto label_21124c;
        default: break;
    }

    ctx->pc = 0x211230u;

    // 0x211230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211234: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x211234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211238: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x211238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21123c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211244: 0xc0844e4  jal         func_211390
    ctx->pc = 0x211244u;
    SET_GPR_U32(ctx, 31, 0x21124Cu);
    ctx->pc = 0x211248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211244u;
    // 0x211248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211390u, 0x211244u, 0x21124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21124Cu;
label_21124c:
    // 0x21124c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21124Cu;
    {
        const bool branch_taken_0x21124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21124Cu;
        // 0x211250: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21124c) {
            ctx->pc = 0x211260u;
            goto label_211260;
        }
    }
    ctx->pc = 0x211254u;
    // 0x211254: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x211254u;
    {
        const bool branch_taken_0x211254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211254u;
        // 0x211258: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211254) {
            ctx->pc = 0x2112D8u;
            goto label_2112d8;
        }
    }
    ctx->pc = 0x21125Cu;
    // 0x21125c: 0x0  nop
    ctx->pc = 0x21125cu;
    // NOP
label_211260:
    // 0x211260: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x211260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211264: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x211264u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x211268: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x211268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21126c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21126cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x211270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211278: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x211278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x21127c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x21127cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x211280: 0x8c238800  lw          $v1, -0x7800($at)
    ctx->pc = 0x211280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936576)));
    // 0x211284: 0x10660014  beq         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x211284u;
    {
        const bool branch_taken_0x211284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x211288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211284u;
        // 0x211288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211284) {
            ctx->pc = 0x2112D8u;
            goto label_2112d8;
        }
    }
    ctx->pc = 0x21128Cu;
    // 0x21128c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x21128cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x211290: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x211290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211294: 0x8c848900  lw          $a0, -0x7700($a0)
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936832)));
    // 0x211298: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x211298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x21129c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x21129cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2112a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2112a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2112a4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2112a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2112a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2112a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2112ac: 0x8c6387f0  lw          $v1, -0x7810($v1)
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936560)));
    // 0x2112b0: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2112b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2112b8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2112b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2112bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2112BCu;
    {
        const bool branch_taken_0x2112bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2112bc) {
            ctx->pc = 0x2112C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2112BCu;
            // 0x2112c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2112C4u;
            goto label_2112c4;
        }
    }
    ctx->pc = 0x2112C4u;
label_2112c4:
    // 0x2112c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2112c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2112cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2112ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2112d0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2112d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2112d4: 0x1012  mflo        $v0
    ctx->pc = 0x2112d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2112d8:
    // 0x2112d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2112d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2112dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2112DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112DCu;
        // 0x2112e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2112E4u;
}
