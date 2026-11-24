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

// Function: sub_00373230
// Address: 0x373230 - 0x3733f0
void sub_00373230_0x373230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373230_0x373230");
#endif

    switch (ctx->pc) {
        case 0x373298u: goto label_373298;
        case 0x3732b8u: goto label_3732b8;
        case 0x3732c8u: goto label_3732c8;
        case 0x3732e8u: goto label_3732e8;
        case 0x373368u: goto label_373368;
        default: break;
    }

    ctx->pc = 0x373230u;

    // 0x373230: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x373230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x373234: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x373234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x373238: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x373238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37323c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x373240: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x373240u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373244: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x373244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x373248: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x373248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37324c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x373250: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x373250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373254: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x373254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x373258: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x373258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37325c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x373260: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x373260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x373264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373268: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x373268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37326c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373270: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x373270u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x373274: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x373274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373278: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x373278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37327c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373288: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x373288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x37328c: 0x250831c0  addiu       $t0, $t0, 0x31C0
    ctx->pc = 0x37328cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12736));
    // 0x373290: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x373290u;
    SET_GPR_U32(ctx, 31, 0x373298u);
    ctx->pc = 0x373294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373290u;
    // 0x373294: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x373290u, 0x373298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373298u;
label_373298:
    // 0x373298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x373298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37329c: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x37329Cu;
    {
        const bool branch_taken_0x37329c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3732A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37329Cu;
        // 0x3732a0: 0x326700ff  andi        $a3, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37329c) {
            ctx->pc = 0x3733B0u;
            goto label_3733b0;
        }
    }
    ctx->pc = 0x3732A4u;
    // 0x3732a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3732a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3732a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3732a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3732acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732b0: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x3732B0u;
    SET_GPR_U32(ctx, 31, 0x3732B8u);
    ctx->pc = 0x3732B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732B0u;
    // 0x3732b4: 0xa6a0056e  sh          $zero, 0x56E($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 1390), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x3732B0u, 0x3732B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732B8u;
label_3732b8:
    // 0x3732b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3732b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3732bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3732bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3732c0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3732C0u;
    SET_GPR_U32(ctx, 31, 0x3732C8u);
    ctx->pc = 0x3732C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732C0u;
    // 0x3732c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3732C0u, 0x3732C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732C8u;
label_3732c8:
    // 0x3732c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3732c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3732cc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3732ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732d0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3732d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732d4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3732d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3732d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732dc: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x3732dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3732e0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3732E0u;
    SET_GPR_U32(ctx, 31, 0x3732E8u);
    ctx->pc = 0x3732E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732E0u;
    // 0x3732e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3732E0u, 0x3732E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732E8u;
label_3732e8:
    // 0x3732e8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3732e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3732ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3732ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3732f0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3732f4: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3732f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3732f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3732f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3732fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x373300: 0x244219c4  addiu       $v0, $v0, 0x19C4
    ctx->pc = 0x373300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6596));
    // 0x373304: 0x246319c8  addiu       $v1, $v1, 0x19C8
    ctx->pc = 0x373304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6600));
    // 0x373308: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x373308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37330c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373310: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373314: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x373314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373318: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x373318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37331c: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x37331cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x373320: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x373320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x373324: 0x0  nop
    ctx->pc = 0x373324u;
    // NOP
    // 0x373328: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x373328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x37332c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x37332cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x373330: 0x244219c0  addiu       $v0, $v0, 0x19C0
    ctx->pc = 0x373330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x373334: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x373334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x373338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37333c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373340: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x373340u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x373344: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x373344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x373348: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x373348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37334c: 0x0  nop
    ctx->pc = 0x37334cu;
    // NOP
    // 0x373350: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x373350u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x373354: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x373354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373358: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x373358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x37335c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x37335cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x373360: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x373360u;
    SET_GPR_U32(ctx, 31, 0x373368u);
    ctx->pc = 0x373364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373360u;
    // 0x373364: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x373360u, 0x373368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373368u;
label_373368:
    // 0x373368: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x373368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x37336c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x373370: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x373370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x373374: 0xae000568  sw          $zero, 0x568($s0)
    ctx->pc = 0x373374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
    // 0x373378: 0xae00056c  sw          $zero, 0x56C($s0)
    ctx->pc = 0x373378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
    // 0x37337c: 0xae020570  sw          $v0, 0x570($s0)
    ctx->pc = 0x37337cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 2));
    // 0x373380: 0xa21e0574  sb          $fp, 0x574($s0)
    ctx->pc = 0x373380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1396), (uint8_t)GPR_U32(ctx, 30));
    // 0x373384: 0xa2110575  sb          $s1, 0x575($s0)
    ctx->pc = 0x373384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1397), (uint8_t)GPR_U32(ctx, 17));
    // 0x373388: 0xa2130577  sb          $s3, 0x577($s0)
    ctx->pc = 0x373388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1399), (uint8_t)GPR_U32(ctx, 19));
    // 0x37338c: 0xa2000576  sb          $zero, 0x576($s0)
    ctx->pc = 0x37338cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1398), (uint8_t)GPR_U32(ctx, 0));
    // 0x373390: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x373390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x373394: 0x7e020550  sq          $v0, 0x550($s0)
    ctx->pc = 0x373394u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    // 0x373398: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x373398u;
    {
        const bool branch_taken_0x373398 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373398u;
        // 0x37339c: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373398) {
            ctx->pc = 0x3733A8u;
            goto label_3733a8;
        }
    }
    ctx->pc = 0x3733A0u;
    // 0x3733a0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3733a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3733a4: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x3733a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
label_3733a8:
    // 0x3733a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3733A8u;
    {
        const bool branch_taken_0x3733a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3733ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733A8u;
        // 0x3733ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3733a8) {
            ctx->pc = 0x3733C0u;
            goto label_3733c0;
        }
    }
    ctx->pc = 0x3733B0u;
label_3733b0:
    // 0x3733b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3733b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3733b4: 0xa6a2056e  sh          $v0, 0x56E($s5)
    ctx->pc = 0x3733b4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x3733b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3733b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3733bc: 0x0  nop
    ctx->pc = 0x3733bcu;
    // NOP
label_3733c0:
    // 0x3733c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3733c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3733c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3733c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3733c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3733c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3733cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3733ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3733d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3733d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3733d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3733d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3733d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3733d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3733dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3733dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3733e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3733e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3733e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3733e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3733e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3733E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3733ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733E8u;
        // 0x3733ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3733E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3733F0u;
}
