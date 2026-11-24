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

// Function: sub_0037B670
// Address: 0x37b670 - 0x37b744
void sub_0037B670_0x37b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B670_0x37b670");
#endif

    switch (ctx->pc) {
        case 0x37b6ccu: goto label_37b6cc;
        case 0x37b70cu: goto label_37b70c;
        case 0x37b738u: goto label_37b738;
        default: break;
    }

    ctx->pc = 0x37b670u;

    // 0x37b670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37b674: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x37b674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x37b678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b67c: 0x454821  addu        $t1, $v0, $a1
    ctx->pc = 0x37b67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37b680: 0xc522fffc  lwc1        $f2, -0x4($t1)
    ctx->pc = 0x37b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b684: 0x24c3fffe  addiu       $v1, $a2, -0x2
    ctx->pc = 0x37b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x37b688: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x37b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b68c: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x37b68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x37b690: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37b690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x37b694: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x37b694u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x37b698: 0x0  nop
    ctx->pc = 0x37b698u;
    // NOP
    // 0x37b69c: 0x0  nop
    ctx->pc = 0x37b69cu;
    // NOP
    // 0x37b6a0: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37B6A0u;
    {
        const bool branch_taken_0x37b6a0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x37b6a0) {
            ctx->pc = 0x37B6D8u;
            goto label_37b6d8;
        }
    }
    ctx->pc = 0x37B6A8u;
    // 0x37b6a8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x37b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x37b6ac: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x37b6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b6b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b6b4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x37b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x37b6b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b6bc: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x37b6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37b6c0: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x37b6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37b6c4: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x37B6C4u;
    SET_GPR_U32(ctx, 31, 0x37B6CCu);
    ctx->pc = 0x37B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6C4u;
    // 0x37b6c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x37B6C4u, 0x37B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6CCu;
label_37b6cc:
    // 0x37b6cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37B6CCu;
    {
        const bool branch_taken_0x37b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b6cc) {
            ctx->pc = 0x37B738u;
            goto label_37b738;
        }
    }
    ctx->pc = 0x37B6D4u;
    // 0x37b6d4: 0x0  nop
    ctx->pc = 0x37b6d4u;
    // NOP
label_37b6d8:
    // 0x37b6d8: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x37b6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x37b6dc: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x37b6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x37b6e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37B6E0u;
    {
        const bool branch_taken_0x37b6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6E0u;
        // 0x37b6e4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b6e0) {
            ctx->pc = 0x37B714u;
            goto label_37b714;
        }
    }
    ctx->pc = 0x37B6E8u;
    // 0x37b6e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37b6ec: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x37b6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b6f0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x37b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37b6f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37b6f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b6f8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x37b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x37b6fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b700: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x37b700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37b704: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x37B704u;
    SET_GPR_U32(ctx, 31, 0x37B70Cu);
    ctx->pc = 0x37B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B704u;
    // 0x37b708: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x37B704u, 0x37B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B70Cu;
label_37b70c:
    // 0x37b70c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37B70Cu;
    {
        const bool branch_taken_0x37b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b70c) {
            ctx->pc = 0x37B738u;
            goto label_37b738;
        }
    }
    ctx->pc = 0x37B714u;
label_37b714:
    // 0x37b714: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x37b714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b718: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x37b718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37b71c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x37b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x37b720: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x37b720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37b724: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x37b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x37b728: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b72c: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x37b72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37b730: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x37B730u;
    SET_GPR_U32(ctx, 31, 0x37B738u);
    ctx->pc = 0x37B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B730u;
    // 0x37b734: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x37B730u, 0x37B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B738u;
label_37b738:
    // 0x37b738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b73c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B73Cu;
        // 0x37b740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B744u;
}
