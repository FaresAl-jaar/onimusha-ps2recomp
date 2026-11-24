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

// Function: sub_00209100
// Address: 0x209100 - 0x2091a0
void sub_00209100_0x209100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209100_0x209100");
#endif

    switch (ctx->pc) {
        case 0x20912cu: goto label_20912c;
        case 0x209168u: goto label_209168;
        case 0x20917cu: goto label_20917c;
        default: break;
    }

    ctx->pc = 0x209100u;

    // 0x209100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20910c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209118: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x209118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20911c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x209120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209124: 0xc081d84  jal         func_207610
    ctx->pc = 0x209124u;
    SET_GPR_U32(ctx, 31, 0x20912Cu);
    ctx->pc = 0x209128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209124u;
    // 0x209128: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209124u, 0x20912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20912Cu;
label_20912c:
    // 0x20912c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20912cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209130: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x209130u;
    {
        const bool branch_taken_0x209130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209130u;
        // 0x209134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209130) {
            ctx->pc = 0x209160u;
            goto label_209160;
        }
    }
    ctx->pc = 0x209138u;
    // 0x209138: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x209138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20913c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20913cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209144: 0x24847ea0  addiu       $a0, $a0, 0x7EA0
    ctx->pc = 0x209144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32416));
    // 0x209148: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20914c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20914cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209150: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209154: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x209154u;
    ctx->pc = 0x209158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209154u;
    // 0x209158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20915Cu;
    // 0x20915c: 0x0  nop
    ctx->pc = 0x20915cu;
    // NOP
label_209160:
    // 0x209160: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209160u;
    SET_GPR_U32(ctx, 31, 0x209168u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209160u, 0x209168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209168u;
label_209168:
    // 0x209168: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20916c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20916cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209170: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x209170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209174: 0xc0898de  jal         func_226378
    ctx->pc = 0x209174u;
    SET_GPR_U32(ctx, 31, 0x20917Cu);
    ctx->pc = 0x209178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209174u;
    // 0x209178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226378u, 0x209174u, 0x20917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20917Cu;
label_20917c:
    // 0x20917c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209180: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x209180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209184: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x209184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20918c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20918cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209198: 0x80898e8  j           func_2263A0
    ctx->pc = 0x209198u;
    ctx->pc = 0x20919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209198u;
    // 0x20919c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263A0u;
    sub_002263A0_0x2263a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2091A0u;
}
