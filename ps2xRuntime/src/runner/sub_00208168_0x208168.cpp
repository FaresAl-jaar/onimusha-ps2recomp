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

// Function: sub_00208168
// Address: 0x208168 - 0x20825c
void sub_00208168_0x208168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208168_0x208168");
#endif

    switch (ctx->pc) {
        case 0x208184u: goto label_208184;
        case 0x2081a0u: goto label_2081a0;
        case 0x2081acu: goto label_2081ac;
        case 0x2081c0u: goto label_2081c0;
        case 0x2081d8u: goto label_2081d8;
        case 0x2081e8u: goto label_2081e8;
        default: break;
    }

    ctx->pc = 0x208168u;

    // 0x208168: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x208168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20816c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x20816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x208170: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x208170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208174: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x208174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x208178: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x208178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x20817c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20817Cu;
    SET_GPR_U32(ctx, 31, 0x208184u);
    ctx->pc = 0x208180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20817Cu;
    // 0x208180: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20817Cu, 0x208184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208184u;
label_208184:
    // 0x208184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20818c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20818cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208190: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x208190u;
    {
        const bool branch_taken_0x208190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208190u;
        // 0x208194: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208190) {
            ctx->pc = 0x2081B8u;
            goto label_2081b8;
        }
    }
    ctx->pc = 0x208198u;
    // 0x208198: 0xc049590  jal         func_125640
    ctx->pc = 0x208198u;
    SET_GPR_U32(ctx, 31, 0x2081A0u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x208198u, 0x2081A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081A0u;
label_2081a0:
    // 0x2081a0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2081a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2081a4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2081A4u;
    SET_GPR_U32(ctx, 31, 0x2081ACu);
    ctx->pc = 0x2081A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081A4u;
    // 0x2081a8: 0x24847b08  addiu       $a0, $a0, 0x7B08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2081A4u, 0x2081ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081ACu;
label_2081ac:
    // 0x2081ac: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2081ACu;
    {
        const bool branch_taken_0x2081ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081ACu;
        // 0x2081b0: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081ac) {
            ctx->pc = 0x20824Cu;
            goto label_20824c;
        }
    }
    ctx->pc = 0x2081B4u;
    // 0x2081b4: 0x0  nop
    ctx->pc = 0x2081b4u;
    // NOP
label_2081b8:
    // 0x2081b8: 0xc081c12  jal         func_207048
    ctx->pc = 0x2081B8u;
    SET_GPR_U32(ctx, 31, 0x2081C0u);
    ctx->pc = 0x2081BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081B8u;
    // 0x2081bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x2081B8u, 0x2081C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081C0u;
label_2081c0:
    // 0x2081c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2081c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2081c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2081C8u;
    {
        const bool branch_taken_0x2081c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2081CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081C8u;
        // 0x2081cc: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081c8) {
            ctx->pc = 0x2081E0u;
            goto label_2081e0;
        }
    }
    ctx->pc = 0x2081D0u;
    // 0x2081d0: 0xc049590  jal         func_125640
    ctx->pc = 0x2081D0u;
    SET_GPR_U32(ctx, 31, 0x2081D8u);
    ctx->pc = 0x2081D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081D0u;
    // 0x2081d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2081D0u, 0x2081D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081D8u;
label_2081d8:
    // 0x2081d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2081D8u;
    {
        const bool branch_taken_0x2081d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081D8u;
        // 0x2081dc: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081d8) {
            ctx->pc = 0x20824Cu;
            goto label_20824c;
        }
    }
    ctx->pc = 0x2081E0u;
label_2081e0:
    // 0x2081e0: 0xc087f0a  jal         func_21FC28
    ctx->pc = 0x2081E0u;
    SET_GPR_U32(ctx, 31, 0x2081E8u);
    ctx->pc = 0x2081E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081E0u;
    // 0x2081e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC28u, 0x2081E0u, 0x2081E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081E8u;
label_2081e8:
    // 0x2081e8: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x2081e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2081ec: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x2081ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2081f0: 0xdfa50048  ld          $a1, 0x48($sp)
    ctx->pc = 0x2081f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2081f4: 0xdfa60050  ld          $a2, 0x50($sp)
    ctx->pc = 0x2081f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2081f8: 0xdfa70058  ld          $a3, 0x58($sp)
    ctx->pc = 0x2081f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2081fc: 0xdfa80060  ld          $t0, 0x60($sp)
    ctx->pc = 0x2081fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x208200: 0xdfa90068  ld          $t1, 0x68($sp)
    ctx->pc = 0x208200u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x208204: 0xdfaa0070  ld          $t2, 0x70($sp)
    ctx->pc = 0x208204u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x208208: 0xdfab0078  ld          $t3, 0x78($sp)
    ctx->pc = 0x208208u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20820c: 0xdfac0080  ld          $t4, 0x80($sp)
    ctx->pc = 0x20820cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x208210: 0xdfad0088  ld          $t5, 0x88($sp)
    ctx->pc = 0x208210u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x208214: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x208214u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x208218: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x208218u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x20821c: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x20821cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x208220: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x208220u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x208224: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x208224u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x208228: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x208228u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x20822c: 0xfe070020  sd          $a3, 0x20($s0)
    ctx->pc = 0x20822cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 7));
    // 0x208230: 0xfe080028  sd          $t0, 0x28($s0)
    ctx->pc = 0x208230u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 8));
    // 0x208234: 0xfe090030  sd          $t1, 0x30($s0)
    ctx->pc = 0x208234u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 9));
    // 0x208238: 0xfe0a0038  sd          $t2, 0x38($s0)
    ctx->pc = 0x208238u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 10));
    // 0x20823c: 0xfe0b0040  sd          $t3, 0x40($s0)
    ctx->pc = 0x20823cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 11));
    // 0x208240: 0xfe0c0048  sd          $t4, 0x48($s0)
    ctx->pc = 0x208240u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 12));
    // 0x208244: 0xfe0d0050  sd          $t5, 0x50($s0)
    ctx->pc = 0x208244u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 13));
    // 0x208248: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x208248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_20824c:
    // 0x20824c: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x20824cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x208250: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x208254: 0x3e00008  jr          $ra
    ctx->pc = 0x208254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208254u;
        // 0x208258: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20825Cu;
}
