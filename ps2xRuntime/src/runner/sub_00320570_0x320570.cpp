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

// Function: sub_00320570
// Address: 0x320570 - 0x320658
void sub_00320570_0x320570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320570_0x320570");
#endif

    switch (ctx->pc) {
        case 0x3205b0u: goto label_3205b0;
        case 0x3205bcu: goto label_3205bc;
        case 0x3205f0u: goto label_3205f0;
        case 0x320618u: goto label_320618;
        default: break;
    }

    ctx->pc = 0x320570u;

    // 0x320570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x320570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x320574: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x320574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x320578: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x320578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32057c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x320580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320584: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x320584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32058c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32058cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320594: 0x8c302410  lw          $s0, 0x2410($at)
    ctx->pc = 0x320594u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8D2410u));
    // 0x320598: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x320598u;
    {
        const bool branch_taken_0x320598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320598u;
        // 0x32059c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320598) {
            ctx->pc = 0x320638u;
            goto label_320638;
        }
    }
    ctx->pc = 0x3205A0u;
    // 0x3205a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3205a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3205a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3205A4u;
    {
        const bool branch_taken_0x3205a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205a4) {
            ctx->pc = 0x320638u;
            goto label_320638;
        }
    }
    ctx->pc = 0x3205ACu;
    // 0x3205ac: 0x0  nop
    ctx->pc = 0x3205acu;
    // NOP
label_3205b0:
    // 0x3205b0: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x3205b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3205b4: 0xc0c7fec  jal         func_31FFB0
    ctx->pc = 0x3205B4u;
    SET_GPR_U32(ctx, 31, 0x3205BCu);
    ctx->pc = 0x3205B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205B4u;
    // 0x3205b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FFB0u, 0x3205B4u, 0x3205BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205BCu;
label_3205bc:
    // 0x3205bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3205BCu;
    {
        const bool branch_taken_0x3205bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205bc) {
            ctx->pc = 0x320628u;
            goto label_320628;
        }
    }
    ctx->pc = 0x3205C4u;
    // 0x3205c4: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x3205c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3205c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3205c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3205cc: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x3205ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3205d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3205d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205d4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3205d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3205d8: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x3205d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3205dc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3205dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3205e0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3205e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3205e4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3205e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3205e8: 0xc0c8068  jal         func_3201A0
    ctx->pc = 0x3205E8u;
    SET_GPR_U32(ctx, 31, 0x3205F0u);
    ctx->pc = 0x3205ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205E8u;
    // 0x3205ec: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3201A0u, 0x3205E8u, 0x3205F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205F0u;
label_3205f0:
    // 0x3205f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3205F0u;
    {
        const bool branch_taken_0x3205f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205f0) {
            ctx->pc = 0x320608u;
            goto label_320608;
        }
    }
    ctx->pc = 0x3205F8u;
    // 0x3205f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3205f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3205fc: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x3205fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x320600: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x320600u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320604: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x320604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_320608:
    // 0x320608: 0x860600c2  lh          $a2, 0xC2($s0)
    ctx->pc = 0x320608u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x32060c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32060cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320610: 0xc0c8128  jal         func_3204A0
    ctx->pc = 0x320610u;
    SET_GPR_U32(ctx, 31, 0x320618u);
    ctx->pc = 0x320614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320610u;
    // 0x320614: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3204A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3204A0u, 0x320610u, 0x320618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320618u;
label_320618:
    // 0x320618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320618u;
    {
        const bool branch_taken_0x320618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320618) {
            ctx->pc = 0x320628u;
            goto label_320628;
        }
    }
    ctx->pc = 0x320620u;
    // 0x320620: 0x36220002  ori         $v0, $s1, 0x2
    ctx->pc = 0x320620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x320624: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x320624u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320628:
    // 0x320628: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x320628u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32062c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x32062cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x320630: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x320630u;
    {
        const bool branch_taken_0x320630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320630) {
            ctx->pc = 0x3205B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3205b0;
        }
    }
    ctx->pc = 0x320638u;
label_320638:
    // 0x320638: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x320638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32063c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x320640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32064c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32064cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320650: 0x3e00008  jr          $ra
    ctx->pc = 0x320650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320650u;
        // 0x320654: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320658u;
}
