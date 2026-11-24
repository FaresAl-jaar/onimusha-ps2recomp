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

// Function: sub_0039E8A0
// Address: 0x39e8a0 - 0x39eab8
void sub_0039E8A0_0x39e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E8A0_0x39e8a0");
#endif

    switch (ctx->pc) {
        case 0x39e8f0u: goto label_39e8f0;
        case 0x39e900u: goto label_39e900;
        case 0x39e940u: goto label_39e940;
        case 0x39e954u: goto label_39e954;
        case 0x39e96cu: goto label_39e96c;
        case 0x39e980u: goto label_39e980;
        case 0x39e990u: goto label_39e990;
        case 0x39e9fcu: goto label_39e9fc;
        case 0x39eaa8u: goto label_39eaa8;
        default: break;
    }

    ctx->pc = 0x39e8a0u;

    // 0x39e8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39e8a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e8a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39e8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39e8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39e8b0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x39e8b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x39e8b4: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x39E8B4u;
    {
        const bool branch_taken_0x39e8b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x39E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8B4u;
        // 0x39e8b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8b4) {
            ctx->pc = 0x39E930u;
            goto label_39e930;
        }
    }
    ctx->pc = 0x39E8BCu;
    // 0x39e8bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e8c0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x39E8C0u;
    {
        const bool branch_taken_0x39e8c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x39e8c0) {
            ctx->pc = 0x39E910u;
            goto label_39e910;
        }
    }
    ctx->pc = 0x39E8C8u;
    // 0x39e8c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E8C8u;
    {
        const bool branch_taken_0x39e8c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e8c8) {
            ctx->pc = 0x39E8D8u;
            goto label_39e8d8;
        }
    }
    ctx->pc = 0x39E8D0u;
    // 0x39e8d0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x39E8D0u;
    {
        const bool branch_taken_0x39e8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e8d0) {
            ctx->pc = 0x39EAA8u;
            goto label_39eaa8;
        }
    }
    ctx->pc = 0x39E8D8u;
label_39e8d8:
    // 0x39e8d8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39E8D8u;
    {
        const bool branch_taken_0x39e8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e8d8) {
            ctx->pc = 0x39E8F8u;
            goto label_39e8f8;
        }
    }
    ctx->pc = 0x39E8E0u;
    // 0x39e8e0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x39e8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x39e8e4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x39e8e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x39e8e8: 0xc0aa2f4  jal         func_2A8BD0
    ctx->pc = 0x39E8E8u;
    SET_GPR_U32(ctx, 31, 0x39E8F0u);
    ctx->pc = 0x39E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8E8u;
    // 0x39e8ec: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8BD0u, 0x39E8E8u, 0x39E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8F0u;
label_39e8f0:
    // 0x39e8f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39E8F0u;
    {
        const bool branch_taken_0x39e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8F0u;
        // 0x39e8f4: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8f0) {
            ctx->pc = 0x39E900u;
            goto label_39e900;
        }
    }
    ctx->pc = 0x39E8F8u;
label_39e8f8:
    // 0x39e8f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39E8F8u;
    SET_GPR_U32(ctx, 31, 0x39E900u);
    ctx->pc = 0x39E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8F8u;
    // 0x39e8fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39E8F8u, 0x39E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E900u;
label_39e900:
    // 0x39e900: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x39e900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x39e904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39e908: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x39E908u;
    {
        const bool branch_taken_0x39e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E908u;
        // 0x39e90c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e908) {
            ctx->pc = 0x39EAA8u;
            goto label_39eaa8;
        }
    }
    ctx->pc = 0x39E910u;
label_39e910:
    // 0x39e910: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x39e910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x39e914: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x39e914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x39e918: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x39e918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x39e91c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x39e91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e920: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x39e920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e924: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x39e924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x39e928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39e92c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x39e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_39e930:
    // 0x39e930: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x39e930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39e934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e938: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x39E938u;
    SET_GPR_U32(ctx, 31, 0x39E940u);
    ctx->pc = 0x39E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E938u;
    // 0x39e93c: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x39E938u, 0x39E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E940u;
label_39e940:
    // 0x39e940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39e940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39e944: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x39e944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39e948: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39e948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39e94c: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x39E94Cu;
    SET_GPR_U32(ctx, 31, 0x39E954u);
    ctx->pc = 0x39E950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E94Cu;
    // 0x39e950: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x39E94Cu, 0x39E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E954u;
label_39e954:
    // 0x39e954: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39e954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x39e958: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x39e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x39e95c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x39e95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39e960: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39e960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39e964: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x39E964u;
    SET_GPR_U32(ctx, 31, 0x39E96Cu);
    ctx->pc = 0x39E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E964u;
    // 0x39e968: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x39E964u, 0x39E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E96Cu;
label_39e96c:
    // 0x39e96c: 0xe6000554  swc1        $f0, 0x554($s0)
    ctx->pc = 0x39e96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1364), bits); }
    // 0x39e970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e974: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x39e974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x39e978: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x39E978u;
    SET_GPR_U32(ctx, 31, 0x39E980u);
    ctx->pc = 0x39E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E978u;
    // 0x39e97c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x39E978u, 0x39E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E980u;
label_39e980:
    // 0x39e980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E980u;
    {
        const bool branch_taken_0x39e980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E980u;
        // 0x39e984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e980) {
            ctx->pc = 0x39E990u;
            goto label_39e990;
        }
    }
    ctx->pc = 0x39E988u;
    // 0x39e988: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39E988u;
    SET_GPR_U32(ctx, 31, 0x39E990u);
    ctx->pc = 0x39E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E988u;
    // 0x39e98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39E988u, 0x39E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E990u;
label_39e990:
    // 0x39e990: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x39e990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39e994: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x39E994u;
    {
        const bool branch_taken_0x39e994 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x39E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E994u;
        // 0x39e998: 0x286100a1  slti        $at, $v1, 0xA1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)161) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e994) {
            ctx->pc = 0x39EA00u;
            goto label_39ea00;
        }
    }
    ctx->pc = 0x39E99Cu;
    // 0x39e99c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x39E99Cu;
    {
        const bool branch_taken_0x39e99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e99c) {
            ctx->pc = 0x39EA00u;
            goto label_39ea00;
        }
    }
    ctx->pc = 0x39E9A4u;
    // 0x39e9a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39e9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39e9a8: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x39e9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39e9ac: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x39e9acu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x39e9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e9b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x39e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39e9b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39e9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e9bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39e9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39e9c0: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x39e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x39e9c4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x39e9c4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x39e9c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39e9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39e9cc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x39e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x39e9d0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x39e9d0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x39e9d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39e9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39e9d8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x39e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x39e9dc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x39e9dcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x39e9e0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x39e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x39e9e4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x39e9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39e9e8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x39e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x39e9ec: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x39e9ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x39e9f0: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x39e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x39e9f4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x39E9F4u;
    SET_GPR_U32(ctx, 31, 0x39E9FCu);
    ctx->pc = 0x39E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E9F4u;
    // 0x39e9f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x39E9F4u, 0x39E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E9FCu;
label_39e9fc:
    // 0x39e9fc: 0x0  nop
    ctx->pc = 0x39e9fcu;
    // NOP
label_39ea00:
    // 0x39ea00: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x39ea00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x39ea04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39EA04u;
    {
        const bool branch_taken_0x39ea04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA04u;
        // 0x39ea08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea04) {
            ctx->pc = 0x39EA18u;
            goto label_39ea18;
        }
    }
    ctx->pc = 0x39EA0Cu;
    // 0x39ea0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39EA0Cu;
    {
        const bool branch_taken_0x39ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ea0c) {
            ctx->pc = 0x39EA98u;
            goto label_39ea98;
        }
    }
    ctx->pc = 0x39EA14u;
    // 0x39ea14: 0x0  nop
    ctx->pc = 0x39ea14u;
    // NOP
label_39ea18:
    // 0x39ea18: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x39ea18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39ea1c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39ea20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39ea24: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x39ea24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39ea28: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x39ea28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x39ea2c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39EA2Cu;
    {
        const bool branch_taken_0x39ea2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39ea2c) {
            ctx->pc = 0x39EA68u;
            goto label_39ea68;
        }
    }
    ctx->pc = 0x39EA34u;
    // 0x39ea34: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x39ea34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39ea38: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x39ea38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39ea3c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39EA3Cu;
    {
        const bool branch_taken_0x39ea3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA3Cu;
        // 0x39ea40: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea3c) {
            ctx->pc = 0x39EA90u;
            goto label_39ea90;
        }
    }
    ctx->pc = 0x39EA44u;
    // 0x39ea44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ea48: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x39ea48u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39ea4c: 0x0  nop
    ctx->pc = 0x39ea4cu;
    // NOP
    // 0x39ea50: 0x0  nop
    ctx->pc = 0x39ea50u;
    // NOP
    // 0x39ea54: 0x2010  mfhi        $a0
    ctx->pc = 0x39ea54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x39ea58: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x39ea58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39ea5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39EA5Cu;
    {
        const bool branch_taken_0x39ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA5Cu;
        // 0x39ea60: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea5c) {
            ctx->pc = 0x39EA90u;
            goto label_39ea90;
        }
    }
    ctx->pc = 0x39EA64u;
    // 0x39ea64: 0x0  nop
    ctx->pc = 0x39ea64u;
    // NOP
label_39ea68:
    // 0x39ea68: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x39ea68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39ea6c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39ea6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39ea70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39EA70u;
    {
        const bool branch_taken_0x39ea70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ea70) {
            ctx->pc = 0x39EA90u;
            goto label_39ea90;
        }
    }
    ctx->pc = 0x39EA78u;
    // 0x39ea78: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x39ea78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39ea7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ea80: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x39ea80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x39ea84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39EA84u;
    {
        const bool branch_taken_0x39ea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA84u;
        // 0x39ea88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea84) {
            ctx->pc = 0x39EA98u;
            goto label_39ea98;
        }
    }
    ctx->pc = 0x39EA8Cu;
    // 0x39ea8c: 0x0  nop
    ctx->pc = 0x39ea8cu;
    // NOP
label_39ea90:
    // 0x39ea90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ea94: 0x0  nop
    ctx->pc = 0x39ea94u;
    // NOP
label_39ea98:
    // 0x39ea98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EA98u;
    {
        const bool branch_taken_0x39ea98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA98u;
        // 0x39ea9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea98) {
            ctx->pc = 0x39EAA8u;
            goto label_39eaa8;
        }
    }
    ctx->pc = 0x39EAA0u;
    // 0x39eaa0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39EAA0u;
    SET_GPR_U32(ctx, 31, 0x39EAA8u);
    ctx->pc = 0x39EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EAA0u;
    // 0x39eaa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39EAA0u, 0x39EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EAA8u;
label_39eaa8:
    // 0x39eaa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39eaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39eaac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39eaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x39EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAB0u;
        // 0x39eab4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EAB8u;
}
