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

// Function: sub_002EF1D0
// Address: 0x2ef1d0 - 0x2ef2b4
void sub_002EF1D0_0x2ef1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF1D0_0x2ef1d0");
#endif

    switch (ctx->pc) {
        case 0x2ef270u: goto label_2ef270;
        case 0x2ef2a4u: goto label_2ef2a4;
        default: break;
    }

    ctx->pc = 0x2ef1d0u;

    // 0x2ef1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef1d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ef1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef1d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ef1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ef1dc: 0x908808e8  lbu         $t0, 0x8E8($a0)
    ctx->pc = 0x2ef1dcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2280)));
    // 0x2ef1e0: 0x1503000b  bne         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF1E0u;
    {
        const bool branch_taken_0x2ef1e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1E0u;
        // 0x2ef1e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1e0) {
            ctx->pc = 0x2EF210u;
            goto label_2ef210;
        }
    }
    ctx->pc = 0x2EF1E8u;
    // 0x2ef1e8: 0x904704d3  lbu         $a3, 0x4D3($v0)
    ctx->pc = 0x2ef1e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1235)));
    // 0x2ef1ec: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2ef1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2ef1f0: 0x904404d2  lbu         $a0, 0x4D2($v0)
    ctx->pc = 0x2ef1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1234)));
    // 0x2ef1f4: 0x904304d1  lbu         $v1, 0x4D1($v0)
    ctx->pc = 0x2ef1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1233)));
    // 0x2ef1f8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2ef1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2ef1fc: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2ef1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2ef200: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2ef200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2ef204: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2ef204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2ef208: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EF208u;
    {
        const bool branch_taken_0x2ef208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF208u;
        // 0x2ef20c: 0x642825  or          $a1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef208) {
            ctx->pc = 0x2EF240u;
            goto label_2ef240;
        }
    }
    ctx->pc = 0x2EF210u;
label_2ef210:
    // 0x2ef210: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ef210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ef214: 0x2463c628  addiu       $v1, $v1, -0x39D8
    ctx->pc = 0x2ef214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952488));
    // 0x2ef218: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x2ef218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2ef21c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ef21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ef220: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2ef220u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef224: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ef224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ef228: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2ef228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ef22c: 0x2463c630  addiu       $v1, $v1, -0x39D0
    ctx->pc = 0x2ef22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952496));
    // 0x2ef230: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2ef230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2ef234: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ef234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ef238: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ef238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef23c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2ef23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2ef240:
    // 0x2ef240: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF240u;
    {
        const bool branch_taken_0x2ef240 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF240u;
        // 0x2ef244: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef240) {
            ctx->pc = 0x2EF278u;
            goto label_2ef278;
        }
    }
    ctx->pc = 0x2EF248u;
    // 0x2ef248: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ef248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ef24c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2ef24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2ef250: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2ef250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2ef254: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2ef254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ef258: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x2ef258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2ef25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ef25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef260: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ef260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef264: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ef264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef268: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2EF268u;
    SET_GPR_U32(ctx, 31, 0x2EF270u);
    ctx->pc = 0x2EF26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF268u;
    // 0x2ef26c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2EF268u, 0x2EF270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF270u;
label_2ef270:
    // 0x2ef270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EF270u;
    {
        const bool branch_taken_0x2ef270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef270) {
            ctx->pc = 0x2EF2A8u;
            goto label_2ef2a8;
        }
    }
    ctx->pc = 0x2EF278u;
label_2ef278:
    // 0x2ef278: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ef278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef27c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2ef27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2ef280: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ef280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ef284: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2ef284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ef288: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2ef288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2ef28c: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x2ef28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2ef290: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2ef290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ef294: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ef294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef298: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ef298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef29c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2EF29Cu;
    SET_GPR_U32(ctx, 31, 0x2EF2A4u);
    ctx->pc = 0x2EF2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF29Cu;
    // 0x2ef2a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2EF29Cu, 0x2EF2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF2A4u;
label_2ef2a4:
    // 0x2ef2a4: 0x0  nop
    ctx->pc = 0x2ef2a4u;
    // NOP
label_2ef2a8:
    // 0x2ef2a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ef2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2ACu;
        // 0x2ef2b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF2B4u;
}
