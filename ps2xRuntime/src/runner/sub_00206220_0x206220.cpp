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

// Function: sub_00206220
// Address: 0x206220 - 0x2062b4
void sub_00206220_0x206220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206220_0x206220");
#endif

    switch (ctx->pc) {
        case 0x206250u: goto label_206250;
        case 0x206260u: goto label_206260;
        case 0x206268u: goto label_206268;
        case 0x206270u: goto label_206270;
        case 0x20627cu: goto label_20627c;
        case 0x20628cu: goto label_20628c;
        default: break;
    }

    ctx->pc = 0x206220u;

    // 0x206220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20622c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206234: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x206234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x206238: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x206238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20623c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x206240: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x206240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x206244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x206248: 0xc0831c4  jal         func_20C710
    ctx->pc = 0x206248u;
    SET_GPR_U32(ctx, 31, 0x206250u);
    ctx->pc = 0x20624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206248u;
    // 0x20624c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x206248u, 0x206250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206250u;
label_206250:
    // 0x206250: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x206250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x206254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206258: 0xc08191a  jal         func_206468
    ctx->pc = 0x206258u;
    SET_GPR_U32(ctx, 31, 0x206260u);
    ctx->pc = 0x20625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206258u;
    // 0x20625c: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206468u, 0x206258u, 0x206260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206260u;
label_206260:
    // 0x206260: 0xc081810  jal         func_206040
    ctx->pc = 0x206260u;
    SET_GPR_U32(ctx, 31, 0x206268u);
    ctx->pc = 0x206264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206260u;
    // 0x206264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206040u, 0x206260u, 0x206268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206268u;
label_206268:
    // 0x206268: 0xc0831c4  jal         func_20C710
    ctx->pc = 0x206268u;
    SET_GPR_U32(ctx, 31, 0x206270u);
    ctx->pc = 0x20626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206268u;
    // 0x20626c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x206268u, 0x206270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206270u;
label_206270:
    // 0x206270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206274: 0xc081a28  jal         func_2068A0
    ctx->pc = 0x206274u;
    SET_GPR_U32(ctx, 31, 0x20627Cu);
    ctx->pc = 0x206278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206274u;
    // 0x206278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2068A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2068A0u, 0x206274u, 0x20627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20627Cu;
label_20627c:
    // 0x20627c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x206280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206284: 0xc081bec  jal         func_206FB0
    ctx->pc = 0x206284u;
    SET_GPR_U32(ctx, 31, 0x20628Cu);
    ctx->pc = 0x206288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206284u;
    // 0x206288: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206FB0u, 0x206284u, 0x20628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20628Cu;
label_20628c:
    // 0x20628c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x206290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206298: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20629c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20629cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2062a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2062a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2062a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2062a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2062a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2062a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2062ac: 0x8081bee  j           func_206FB8
    ctx->pc = 0x2062ACu;
    ctx->pc = 0x2062B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062ACu;
    // 0x2062b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FB8u;
    sub_00206FB8_0x206fb8(rdram, ctx, runtime); return;
    ctx->pc = 0x2062B4u;
}
