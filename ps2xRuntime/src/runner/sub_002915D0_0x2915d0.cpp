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

// Function: sub_002915D0
// Address: 0x2915d0 - 0x291668
void sub_002915D0_0x2915d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002915D0_0x2915d0");
#endif

    switch (ctx->pc) {
        case 0x291638u: goto label_291638;
        case 0x291644u: goto label_291644;
        case 0x291658u: goto label_291658;
        default: break;
    }

    ctx->pc = 0x2915d0u;

    // 0x2915d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2915d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2915d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2915d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2915d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2915d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2915dc: 0x94832acc  lhu         $v1, 0x2ACC($a0)
    ctx->pc = 0x2915dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10956)));
    // 0x2915e0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2915E0u;
    {
        const bool branch_taken_0x2915e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915E0u;
        // 0x2915e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915e0) {
            ctx->pc = 0x291630u;
            goto label_291630;
        }
    }
    ctx->pc = 0x2915E8u;
    // 0x2915e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2915e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2915ec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2915ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2915f0: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x2915f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2915f4: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x2915f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2915f8: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x2915f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x2915fc: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2915fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x291600: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x291604: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x291604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x291608: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x291608u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x29160c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291610: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x291610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291614: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x291614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x291618: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x291618u;
    {
        const bool branch_taken_0x291618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291618) {
            ctx->pc = 0x291630u;
            goto label_291630;
        }
    }
    ctx->pc = 0x291620u;
    // 0x291620: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x291620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291624: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x291624u;
    {
        const bool branch_taken_0x291624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291624u;
        // 0x291628: 0xa203011c  sb          $v1, 0x11C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291624) {
            ctx->pc = 0x291658u;
            goto label_291658;
        }
    }
    ctx->pc = 0x29162Cu;
    // 0x29162c: 0x0  nop
    ctx->pc = 0x29162cu;
    // NOP
label_291630:
    // 0x291630: 0xc0a4460  jal         func_291180
    ctx->pc = 0x291630u;
    SET_GPR_U32(ctx, 31, 0x291638u);
    ctx->pc = 0x291634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291630u;
    // 0x291634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291180u, 0x291630u, 0x291638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291638u;
label_291638:
    // 0x291638: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x291638u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29163c: 0xc0a4410  jal         func_291040
    ctx->pc = 0x29163Cu;
    SET_GPR_U32(ctx, 31, 0x291644u);
    ctx->pc = 0x291640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29163Cu;
    // 0x291640: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291040u, 0x29163Cu, 0x291644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291644u;
label_291644:
    // 0x291644: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x291644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x291648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29164c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29164cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x291650: 0xc0a44b4  jal         func_2912D0
    ctx->pc = 0x291650u;
    SET_GPR_U32(ctx, 31, 0x291658u);
    ctx->pc = 0x291654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291650u;
    // 0x291654: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912D0u, 0x291650u, 0x291658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291658u;
label_291658:
    // 0x291658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29165c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29165cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291660: 0x3e00008  jr          $ra
    ctx->pc = 0x291660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291660u;
        // 0x291664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291668u;
}
