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

// Function: sub_002917A0
// Address: 0x2917a0 - 0x291848
void sub_002917A0_0x2917a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002917A0_0x2917a0");
#endif

    switch (ctx->pc) {
        case 0x291808u: goto label_291808;
        case 0x291814u: goto label_291814;
        case 0x291828u: goto label_291828;
        case 0x291834u: goto label_291834;
        default: break;
    }

    ctx->pc = 0x2917a0u;

    // 0x2917a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2917a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2917a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2917a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2917a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2917a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2917ac: 0x94832acc  lhu         $v1, 0x2ACC($a0)
    ctx->pc = 0x2917acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10956)));
    // 0x2917b0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2917B0u;
    {
        const bool branch_taken_0x2917b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917B0u;
        // 0x2917b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917b0) {
            ctx->pc = 0x291800u;
            goto label_291800;
        }
    }
    ctx->pc = 0x2917B8u;
    // 0x2917b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2917b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2917bc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2917bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2917c0: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x2917c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2917c4: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x2917c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2917c8: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x2917c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x2917cc: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2917ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2917d0: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x2917d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x2917d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2917d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2917d8: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x2917d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2917dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2917dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2917e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2917e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2917e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2917e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2917e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2917E8u;
    {
        const bool branch_taken_0x2917e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2917e8) {
            ctx->pc = 0x291800u;
            goto label_291800;
        }
    }
    ctx->pc = 0x2917F0u;
    // 0x2917f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2917f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2917f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2917F4u;
    {
        const bool branch_taken_0x2917f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F4u;
        // 0x2917f8: 0xa203011c  sb          $v1, 0x11C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917f4) {
            ctx->pc = 0x291838u;
            goto label_291838;
        }
    }
    ctx->pc = 0x2917FCu;
    // 0x2917fc: 0x0  nop
    ctx->pc = 0x2917fcu;
    // NOP
label_291800:
    // 0x291800: 0xc0a4460  jal         func_291180
    ctx->pc = 0x291800u;
    SET_GPR_U32(ctx, 31, 0x291808u);
    ctx->pc = 0x291804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291800u;
    // 0x291804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291180u, 0x291800u, 0x291808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291808u;
label_291808:
    // 0x291808: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x291808u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29180c: 0xc0a4410  jal         func_291040
    ctx->pc = 0x29180Cu;
    SET_GPR_U32(ctx, 31, 0x291814u);
    ctx->pc = 0x291810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29180Cu;
    // 0x291810: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291040u, 0x29180Cu, 0x291814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291814u;
label_291814:
    // 0x291814: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x291814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x291818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29181c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29181cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x291820: 0xc0a44b4  jal         func_2912D0
    ctx->pc = 0x291820u;
    SET_GPR_U32(ctx, 31, 0x291828u);
    ctx->pc = 0x291824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291820u;
    // 0x291824: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912D0u, 0x291820u, 0x291828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291828u;
label_291828:
    // 0x291828: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x291828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x29182c: 0xc0a448c  jal         func_291230
    ctx->pc = 0x29182Cu;
    SET_GPR_U32(ctx, 31, 0x291834u);
    ctx->pc = 0x291830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29182Cu;
    // 0x291830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291230u, 0x29182Cu, 0x291834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291834u;
label_291834:
    // 0x291834: 0x0  nop
    ctx->pc = 0x291834u;
    // NOP
label_291838:
    // 0x291838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29183c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29183cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291840: 0x3e00008  jr          $ra
    ctx->pc = 0x291840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291840u;
        // 0x291844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291848u;
}
