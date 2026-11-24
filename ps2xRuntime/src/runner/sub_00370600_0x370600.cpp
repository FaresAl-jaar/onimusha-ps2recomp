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

// Function: sub_00370600
// Address: 0x370600 - 0x370710
void sub_00370600_0x370600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370600_0x370600");
#endif

    switch (ctx->pc) {
        case 0x370670u: goto label_370670;
        case 0x37067cu: goto label_37067c;
        case 0x370684u: goto label_370684;
        case 0x370690u: goto label_370690;
        case 0x370698u: goto label_370698;
        case 0x3706acu: goto label_3706ac;
        case 0x3706bcu: goto label_3706bc;
        case 0x3706ecu: goto label_3706ec;
        case 0x370700u: goto label_370700;
        default: break;
    }

    ctx->pc = 0x370600u;

    // 0x370600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370604: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x370604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x370608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37060c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x370610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370614: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x370614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x370618: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x370618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x37061c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37061cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370620: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x370620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x370624: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x370624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x370628: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x370628u;
    { uint32_t bits = FAST_READ32(0x65AC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37062c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x37062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x370630: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x370630u;
    { uint32_t bits = FAST_READ32(0x65AC64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370634: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x370634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x370638: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x370638u;
    { uint32_t bits = FAST_READ32(0x65AC68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37063c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x37063cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x370640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370644: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x370644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x370648: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x370648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x37064c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x37064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x370650: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x370650u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370654: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x370654u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370658: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x370658u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37065c: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x37065cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x370660: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x370660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x370664: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x370664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x370668: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x370668u;
    SET_GPR_U32(ctx, 31, 0x370670u);
    ctx->pc = 0x37066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370668u;
    // 0x37066c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x370668u, 0x370670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370670u;
label_370670:
    // 0x370670: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x370670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x370674: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x370674u;
    SET_GPR_U32(ctx, 31, 0x37067Cu);
    ctx->pc = 0x370678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370674u;
    // 0x370678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x370674u, 0x37067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37067Cu;
label_37067c:
    // 0x37067c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x37067Cu;
    SET_GPR_U32(ctx, 31, 0x370684u);
    ctx->pc = 0x370680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37067Cu;
    // 0x370680: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x37067Cu, 0x370684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370684u;
label_370684:
    // 0x370684: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x370684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x370688: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x370688u;
    SET_GPR_U32(ctx, 31, 0x370690u);
    ctx->pc = 0x37068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370688u;
    // 0x37068c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x370688u, 0x370690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370690u;
label_370690:
    // 0x370690: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x370690u;
    SET_GPR_U32(ctx, 31, 0x370698u);
    ctx->pc = 0x370694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370690u;
    // 0x370694: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x370690u, 0x370698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370698u;
label_370698:
    // 0x370698: 0x92050337  lbu         $a1, 0x337($s0)
    ctx->pc = 0x370698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 823)));
    // 0x37069c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x37069cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3706a0: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x3706a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x3706a4: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x3706A4u;
    SET_GPR_U32(ctx, 31, 0x3706ACu);
    ctx->pc = 0x3706A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706A4u;
    // 0x3706a8: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x3706A4u, 0x3706ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706ACu;
label_3706ac:
    // 0x3706ac: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3706acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3706b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3706b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3706b4: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x3706B4u;
    SET_GPR_U32(ctx, 31, 0x3706BCu);
    ctx->pc = 0x3706B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706B4u;
    // 0x3706b8: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x3706B4u, 0x3706BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706BCu;
label_3706bc:
    // 0x3706bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3706bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3706c0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3706c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3706c4: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3706c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3706c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3706c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3706cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3706ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3706d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3706d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3706d4: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3706d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3706d8: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x3706d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3706dc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3706DCu;
    {
        const bool branch_taken_0x3706dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3706E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706DCu;
        // 0x3706e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706dc) {
            ctx->pc = 0x3706F8u;
            goto label_3706f8;
        }
    }
    ctx->pc = 0x3706E4u;
    // 0x3706e4: 0xc0dc28c  jal         func_370A30
    ctx->pc = 0x3706E4u;
    SET_GPR_U32(ctx, 31, 0x3706ECu);
    ctx->pc = 0x370A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370A30u, 0x3706E4u, 0x3706ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706ECu;
label_3706ec:
    // 0x3706ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3706ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3706f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3706F0u;
    {
        const bool branch_taken_0x3706f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3706F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706F0u;
        // 0x3706f4: 0xa203001c  sb          $v1, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706f0) {
            ctx->pc = 0x370700u;
            goto label_370700;
        }
    }
    ctx->pc = 0x3706F8u;
label_3706f8:
    // 0x3706f8: 0xc0dc1dc  jal         func_370770
    ctx->pc = 0x3706F8u;
    SET_GPR_U32(ctx, 31, 0x370700u);
    ctx->pc = 0x3706FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706F8u;
    // 0x3706fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370770u, 0x3706F8u, 0x370700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370700u;
label_370700:
    // 0x370700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370708: 0x3e00008  jr          $ra
    ctx->pc = 0x370708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370708u;
        // 0x37070c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370710u;
}
