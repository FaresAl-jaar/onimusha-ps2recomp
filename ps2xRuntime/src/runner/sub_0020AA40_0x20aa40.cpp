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

// Function: sub_0020AA40
// Address: 0x20aa40 - 0x20aafc
void sub_0020AA40_0x20aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AA40_0x20aa40");
#endif

    switch (ctx->pc) {
        case 0x20aa5cu: goto label_20aa5c;
        case 0x20aa68u: goto label_20aa68;
        case 0x20aa80u: goto label_20aa80;
        case 0x20aa98u: goto label_20aa98;
        default: break;
    }

    ctx->pc = 0x20aa40u;

    // 0x20aa40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20aa44: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x20aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x20aa48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20aa4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20aa4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20aa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20aa54: 0xc081d4c  jal         func_207530
    ctx->pc = 0x20AA54u;
    SET_GPR_U32(ctx, 31, 0x20AA5Cu);
    ctx->pc = 0x20AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA54u;
    // 0x20aa58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207530u, 0x20AA54u, 0x20AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA5Cu;
label_20aa5c:
    // 0x20aa5c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x20aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x20aa60: 0xc08852e  jal         func_2214B8
    ctx->pc = 0x20AA60u;
    SET_GPR_U32(ctx, 31, 0x20AA68u);
    ctx->pc = 0x20AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA60u;
    // 0x20aa64: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2214B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2214B8u, 0x20AA60u, 0x20AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA68u;
label_20aa68:
    // 0x20aa68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20aa6c: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AA6Cu;
    {
        const bool branch_taken_0x20aa6c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA6Cu;
        // 0x20aa70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa6c) {
            ctx->pc = 0x20AA90u;
            goto label_20aa90;
        }
    }
    ctx->pc = 0x20AA74u;
    // 0x20aa74: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20aa78: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20AA78u;
    SET_GPR_U32(ctx, 31, 0x20AA80u);
    ctx->pc = 0x20AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA78u;
    // 0x20aa7c: 0x24848560  addiu       $a0, $a0, -0x7AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20AA78u, 0x20AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA80u;
label_20aa80:
    // 0x20aa80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20aa84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aa88: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20AA88u;
    {
        const bool branch_taken_0x20aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA88u;
        // 0x20aa8c: 0xae0302fc  sw          $v1, 0x2FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa88) {
            ctx->pc = 0x20AAECu;
            goto label_20aaec;
        }
    }
    ctx->pc = 0x20AA90u;
label_20aa90:
    // 0x20aa90: 0xc08139e  jal         func_204E78
    ctx->pc = 0x20AA90u;
    SET_GPR_U32(ctx, 31, 0x20AA98u);
    ctx->pc = 0x204E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204E78u, 0x20AA90u, 0x20AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA98u;
label_20aa98:
    // 0x20aa98: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x20aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x20aa9c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x20aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20aaa0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20aaa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20aaa8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20aaac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20aab0: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x20aab0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20aab4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20AAB4u;
    {
        const bool branch_taken_0x20aab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aab4) {
            ctx->pc = 0x20AAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AAB4u;
            // 0x20aab8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AABCu;
            goto label_20aabc;
        }
    }
    ctx->pc = 0x20AABCu;
label_20aabc:
    // 0x20aabc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aac0: 0x2012  mflo        $a0
    ctx->pc = 0x20aac0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x20aac4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x20aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x20aac8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20aacc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20aad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20aad4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x20aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20aad8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20aadc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20aae0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x20aae0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x20aae4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20aae8: 0xae0202fc  sw          $v0, 0x2FC($s0)
    ctx->pc = 0x20aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 2));
label_20aaec:
    // 0x20aaec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20aaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aaf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20aaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20aaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x20AAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAF4u;
        // 0x20aaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AAFCu;
}
